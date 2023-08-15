//
// Created by 26513 on 2023/7/29.
//

// 类做友元
#include "iostream"
#include "string"

using namespace std;

// 提前声明类
class Building;

class GoodGay {
public:
    // 构造函数
    GoodGay();

    // 参观函数 访问building中的属性
    void visit();

private:
    Building *building;

};

class Building {
    friend class GoodGay;

public:
    // 构造函数
    Building();

    string m_SittingRoom;
private:
    string m_BedRoom;
};

// 类外写成员函数
Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
    // 创建建筑物对象
    building = new Building;
}

// 类做友元可访问
void GoodGay::visit() {
    cout << "good gay类正在访问: " << building->m_SittingRoom << endl;
    cout << "good gay类正在访问: " << building->m_BedRoom << endl;
}

void test01() {
    GoodGay gg;
    gg.visit();
}

int main() {
    test01();

    system("pause");
    return 0;
}