//
// Created by 26513 on 2023/7/5.
//

// ��Ԫ, �ڳ�����,��Щ˽������Ҳ�������������һЩ������������з���, ����Ҫ�õ���Ԫ�ļ���
// ��Ԫ��Ŀ�ľ�����һ�����������������һ�����е�˽�г�Ա �ؼ�����friend
// ����ʵ��:
// ȫ�ֺ���  ��  ��Ա����


#include "iostream"

using namespace std;


class Building {
    // goodGayȫ�ֺ������Է���Building���е�˽�г�Ա����
    friend void goodGay(Building *building);

public:
    Building() {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }

    string m_SittingRoom;

private:
    string m_BedRoom;
};

// ȫ�ֺ�������Ԫ
void goodGay(Building *building) {
    cout << "�û��ѵ�ȫ�ֺ������ڷ���: " << building->m_SittingRoom << endl;
    cout << "�û��ѵ�ȫ�ֺ������ڷ���:" << building->m_BedRoom << endl;
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