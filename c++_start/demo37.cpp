//
// Created by 26513 on 2023/7/29.
//
// 运算符重载: 对已有的运算符重新进行定义, 赋予其另一种功能, 以适应不同的数据类型

#include "iostream"
#include "string"

using namespace std;

// 加号运算符重载——实现两个自定义数据类型相加的运算
class Person {
public:
    // 1. 成员函数重载+号
    // 本质调用 Person p3 = p1.operator+(p2)
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


// 2. 全局函数重载+号
// 本质 Person p3 = operator+(p1, p2)
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