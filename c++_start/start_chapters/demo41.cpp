//
// Created by 26513 on 2023/8/1.
//

#include "iostream"
#include "string"

using namespace std;

// �̳��еĶ���ģ��
class Base {
public:
    Base() {
        cout << "base���캯��" << endl;
    }

    ~Base() {
        cout << "base��������" << endl;
    }

    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

// ���������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
// ������˽�г�Ա�����Ǳ�������������, ��˷��ʲ���, ����ȷʵ�Ǳ��̳���ȥ��
// �̳��еĹ��������˳��, �ȸ��๹�� �����๹�� �ٸ������� ����������
class Son : public Base {
public:
    Son() {
        cout << "son���캯��" << endl;
    }

    ~Son() {
        cout << "son��������" << endl;
    }

public:
    int m_D;
};

void test01() {
    cout << sizeof(Son) << endl;
};

void test02() {
//    Base b;
    Son s;
}

int main() {
    test01();
    test02();

    system("pause");
    return 0;
}
