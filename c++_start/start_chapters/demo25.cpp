//
// Created by 26513 on 2023/7/2.
//

// �����ǳ���� ǳ�����Ǽ򵥵ĸ�ֵ��������  ������ڶ�����������ռ�, ���п�������
// ������ñ������ṩ�Ŀ������캯�� ����ǳ�������� ǳ����������������Ƕ������ڴ��ظ��ͷ�
// ǳ����������Ҫ����������н��

#include "iostream"

using namespace std;

class Person {
public:
    Person() {
        cout << "Person���вι��캯������" << endl;
    }

    ~Person() {
        // ���������ٵ��������ͷŲ���
        if (m_Height != nullptr) {
            delete m_Height;
            m_Height = nullptr;
        }
        cout << "Person��������������" << endl;
    }

    // �Լ�ʵ�ֿ������캯�� ���ǳ��������������
    Person(const Person &p) {
        cout << "Person�Ŀ������캯������" << endl;
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height);
    }

    Person(int age, int height) {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person���вι��캯������" << endl;
    }

    int m_Age;
    int *m_Height;

};


void test01() {
    Person p1(18, 160);
    cout << p1.m_Age << endl;
    cout << int(*p1.m_Height) << endl;

    Person p2(p1);
    cout << p2.m_Age << endl;
    cout << int(*p2.m_Height) << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}