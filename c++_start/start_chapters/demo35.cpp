//
// Created by 26513 on 2023/7/29.
//

// ������Ԫ
#include "iostream"
#include "string"

using namespace std;

// ��ǰ������
class Building;

class GoodGay {
public:
    // ���캯��
    GoodGay();

    // �ιۺ��� ����building�е�����
    void visit();

private:
    Building *building;

};

class Building {
    friend class GoodGay;

public:
    // ���캯��
    Building();

    string m_SittingRoom;
private:
    string m_BedRoom;
};

// ����д��Ա����
Building::Building() {
    m_SittingRoom = "����";
    m_BedRoom = "����";
}

GoodGay::GoodGay() {
    // �������������
    building = new Building;
}

// ������Ԫ�ɷ���
void GoodGay::visit() {
    cout << "good gay�����ڷ���: " << building->m_SittingRoom << endl;
    cout << "good gay�����ڷ���: " << building->m_BedRoom << endl;
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