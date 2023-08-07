//
// Created by 26513 on 2023/7/29.
//
// ���������: �����е���������½��ж���, ��������һ�ֹ���, ����Ӧ��ͬ����������

#include "iostream"
#include "string"

using namespace std;

// �Ӻ���������ء���ʵ�������Զ�������������ӵ�����
class Person {
public:
    // 1. ��Ա��������+��
    // ���ʵ��� Person p3 = p1.operator+(p2)
    Person operator+(Person &p) const {
        Person tmp;
        tmp.m_A = this->m_A + p.m_A;
        tmp.m_B = this->m_B + p.m_B;
        return tmp;
    }

public:
    int m_A;
    int m_B;
};

void test01() {
    Person p1;
    Person p2;
    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;

    Person p3 = p1 + p2;
    cout << p3.m_A << endl;
    cout << p3.m_B << endl;
}


// 2. ȫ�ֺ�������+��
// ���� Person p3 = operator+(p1, p2)
Person operator+(Person &p1, Person &p2) {
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}


int main() {
    test01();

    system("pause");
    return 0;
}