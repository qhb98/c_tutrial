//
// Created by 26513 on 2023/7/29.
//
// ��Ա��������Ԫ

#include "iostream"
#include "string"

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();

    // �øú������Է���building�е�˽�г�Ա
    void visit();

    // �øú��������Է���building�е�˽�г�Ա
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

// ����ʵ�ֳ�Ա����
Building::Building() {
    m_SittingRoom = "����";
    m_BedRoom = "����";
}

GoodGay::GoodGay() {
    building = new Building;

}

void GoodGay::visit() {
    cout << "visit�������ڷ���" << building->m_SittingRoom << endl;
}

void GoodGay::visit2() {
    cout << "visit2�������ڷ���" << building->m_BedRoom << endl;
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