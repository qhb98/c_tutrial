//
// Created by 26513 on 2023/8/1.
//

// 当子类与父类出现同名的成员, 访问子类同名成员的时候直接访问即可, 访问父类同名成员的时候需要加作用域
// 如果子类中出现了和父类同名的成员函数, 子类会隐藏掉父类中所有的同名成员函数, 包括重载函数

//如果想访问到父类中被因此的同名成员函数, 需要加作用域

#include "iostream"
#include "string"

using namespace std;

class Base {
public:
    Base() {
        m_A = 100;
    }

    int m_A;

};


class Son : public Base {
public:
    Son() {
        m_A = 200;
    }

    int m_A;
};

void test01() {
    Base b;
    Son s;

    cout << b.m_A << endl;
    cout << s.m_A << endl;
    cout << s.Base::m_A << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}