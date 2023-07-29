//
// Created by 26513 on 2023/7/5.
//

// 友元, 在程序里,有些私有属性也想让类外特殊的一些函数或者类进行访问, 就需要用到友元的技术
// 友元的目的就是让一个函数或者类访问另一个类中的私有成员 关键字是friend
// 三种实现:
// 全局函数  类  成员函数


#include "iostream"

using namespace std;


class Building {
    // goodGay全局函数可以访问Building类中的私有成员属性
    friend void goodGay(Building *building);

public:
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

    string m_SittingRoom;

private:
    string m_BedRoom;
};

// 全局函数做友元
void goodGay(Building *building) {
    cout << "好基友的全局函数正在访问: " << building->m_SittingRoom << endl;
    cout << "好基友的全局函数正在访问:" << building->m_BedRoom << endl;
}

void test01() {
    Building building;
    goodGay(&building);
}


int main() {
    test01();

    system("pause");
    return 0;
}