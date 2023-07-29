//
// Created by 26513 on 2023/7/2.
//

// 初始化列表 用来初始化属性
// 构造函数(): 属性1(值1), 属性2(值2), ... {}

#include "iostream"

using namespace std;

class Person {
public:
    // 用初始化列表初始化属性
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {};

    int m_A;
    int m_B;
    int m_C;
};

void test01() {
    Person p(30, 20, 10);
    cout << p.m_A << endl;
    cout << p.m_B << endl;
    cout << p.m_C << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}