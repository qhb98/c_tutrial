//
// Created by 26513 on 2023/7/3.
//

// this指针 —— 隐含每一个非静态成员函数内的一种指针, this指针不需要定义, 直接使用即可

// 每一个非静态成员函数只会诞生一份函数实例, 也就是说多个同类型的对象会共用一块代码
// c++通过提供特殊的对象指针, this指针指向被调用的成员函数所属的对象, 解决上述问题

// this指针是隐含每一个非静态成员函数内的一种指针
// this指针不需要定义, 直接使用即可

// this指针的用途:
// 当形参和成员变量同名时, 可用this指针来区分
// 在类的非静态成员函数中返回对象本身, 可使用 return *this

#include "iostream"

using namespace std;

class Person {
public:
    Person(int age) {
        age = m_Age;
    }

    int m_Age;
};

class Person1 {
public:
    Person1(int age) {
        // this 指针指向被调用的成员函数 所属的对象
        this->age = age;
    }

    Person1& PersonAddAge(Person1 &p){
        this->age += p.age;
        // this指向的是p2的指针, *this指向的就是p2这个对象本身
        return *this;
    }

    int age;
};

// 1 解决名称冲突
void test01() {
    Person p1(8);
    cout << p1.m_Age << endl;
}

// 2 返回对象本身用*this
void test02() {
    Person1 p1(10);
    Person1 p2(10);

    // 链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << p2.age << endl;
}


int main() {
    test02();
    system("pause");
    return 0;
}