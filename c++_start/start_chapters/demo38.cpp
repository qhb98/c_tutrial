//
// Created by 26513 on 2023/7/31.
//
// 左移运算符重载

#include "iostream"
#include "string"

using namespace std;

class Person {
public:
    int m_A;
    int m_B;
};

// 只能用全局函数重载左移运算符
void operator<<(ostream &cout, Person &p) {
    cout << p.m_A << endl;
    cout << p.m_B << endl;
}

void test01() {
    Person p;
    p.m_A = 10;
    p.m_B = 10;
    cout << p;
}


int main() {
    test01();
    system("pause");
    return 0;
}


