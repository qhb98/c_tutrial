//
// Created by 26513 on 2023/7/29.
//
// 成员函数做友元

#include "iostream"
#include "string"

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();

    // 让该函数可以访问building中的私有成员
    void visit();

    // 让该函数不可以访问building中的私有成员
    void visit2();

    Building *building;
};

class Building {
    friend void GoodGay::visit();
    friend void GoodGay::visit2();

public:
    Building();

    string m_SittingRoom;
private:
    string m_BedRoom;

};

// 类外实现成员函数
Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
    building = new Building;

}

void GoodGay::visit() {
    cout << "visit函数正在访问" << building->m_SittingRoom << endl;
}

void GoodGay::visit2() {
    cout << "visit2函数正在访问" << building->m_BedRoom << endl;
}

void test01() {
    GoodGay gg;
    gg.visit();
    gg.visit2();
}


int main() {
    test01();

    system("pause");
    return 0;
}