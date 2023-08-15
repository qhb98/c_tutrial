//
// Created by 26513 on 2023/7/2.
//

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

#include "iostream"

using namespace std;

class Person {
public:
    static void func() {
        // 静态成员函数可以访问静态成员变量
        m_A = 100;
        // 静态成员函数不可以访问非静态成员变量
//        mm_B = 200;

        cout << "static void func 调用" << endl;
    }

    // 静态成员变量
    static int m_A;
    // 非静态成员变量
    int mm_B;

private:
    static void func2(){
        cout << "static void func2 调用" << endl;
    }

};

void test01() {
    //1. 通过对象访问
    Person p;
    p.func();
    //2. 通过类名访问
    Person::func();

    // 类外访问不到私有静态成员变量
//    Person::func2();

};

int main() {
    test01();

    system("pause");
    return 0;
}
