//
// Created by 26513 on 2023/7/1.
//

// �������캯������ʱ��
// c++ �п������캯������ʱ�� ͨ�����������
// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
// 2. ֵ���ݵķ�ʽ������������ֵ
// 3. ��ֵ��ʽ���ؾֲ�����

// Ĭ�������, c++ ���������ٸ�һ�������3������
// 1. Ĭ�Ϲ��캯�� �޲� ������Ϊ��
// 2. Ĭ���������� �޲� ������Ϊ��
// 3. Ĭ�Ͽ������캯�� �����Խ���ֵ����

// ���캯�����ù���:
// 1. ����û������вι��캯�� c++�����ṩĬ���޲ι��� ���ǻ��ṩĬ�Ͽ�������
// 2. ����û����忽�����캯�� c++�������ṩ�������캯��
// 3. ����һ����, c++���������ÿ���඼�������3������

#include "iostream"

using namespace std;

class Person {
public:
    Person() {
        cout << "���캯��." << endl;
    }

    ~Person() {
        cout << "��������." << endl;
    }

    Person(int age) {
        cout << "�вι��캯������" << endl;
        m_Age = age;
    }

    Person(const Person &p) {
        cout << "�������캯������" << endl;
        m_Age = p.m_Age;
    }

    int m_Age;

};

// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01() {
    Person p1(20);
    Person p2(p1);

    cout << "p2 ������Ϊ: " << p2.m_Age << endl;
}

// 2. ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p) {}

void test02() {
    Person p;
    doWork(p);
}

// 3. ֵ��ʽ���ؾֲ�����
Person doWork2() {
    Person p1;
    cout << (int *) &p1 << endl;
    return p1;
}

void test03() {
    Person p = doWork2();
    cout << (int *) &p << endl;
}

int main() {
    test03();
//    test02();
//    test01();

    system("pause");
    return 0;
}
