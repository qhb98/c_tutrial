//
// Created by 26513 on 2023/7/2.
//

// 静态成员就是在成员变量和成员函数前加上关键字static, 称为静态成员
// 静态成员分为 静态成员变量 和 静态成员函数
// 静态成员变量是 所有对象共享同一份数据, 在编译阶段分配内存, 类内声明 类外初始化
// 静态成员函数是 所有对象共享同一个函数, 静态成员函数只能访问静态成员变量

#include "iostream"

using namespace std;

class Person {
public:
    // 类内声明
    static int m_A;

    // 静态成员变量的特点
    // 1 在编译阶段分配内存
    // 2 类内声明 类外初始化
    // 3 所有对象共享同一份数据

private:
    // 静态成员变量也是有访问权限的
    static int m_B;

};

// 类外初始化
int Person::m_A = 100;
int Person::m_B = 200;

void test01() {
    Person p1;
    cout << p1.m_A << endl;

    Person p2;
    p2.m_A = 200;
    cout << p2.m_A << endl;
}

void test02(){
    // 1. 通过对象进行访问
    Person p;
    cout << p.m_A << endl;
    // 2. 通过类名进行访问
    cout << Person::m_A << endl;
    // 私有权限访问不到
//    cout << Person::m_B << endl;
}


int main() {
    test01();

    return 0;
}