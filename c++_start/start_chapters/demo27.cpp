//
// Created by 26513 on 2023/7/2.
//

// �������Ϊ���Ա
// c++���еĳ�Ա����һ����Ķ���, �Ƹó�ԱΪ�����Ա
// �������������Ϊ�����Ա, ����ʱ�ȹ��������, �ٹ�������, ������˳���빹���෴

#include "iostream"

using namespace std;

class Phone {
public:
    Phone(string name) {
        cout << "phone���вι��캯��" << endl;
        p_Name = name;
    }

    ~Phone(){
        cout << "phone����������" << endl;
    }

    string p_Name;
};

// �������Ϊ���Ա
class Person {
public:
    Person(string name, string pName) : m_Name(name), m_Phone(pName) {
        cout << "person�Ĺ��캯������" << endl;
    }

    string m_Name;
    Phone m_Phone;
};


void test01() {
    Person p("����", "��Ϊ�ֻ�");
    cout << p.m_Name << endl;
    cout << p.m_Phone.p_Name << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}