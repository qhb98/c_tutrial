//
// Created by 26513 on 2023/7/2.
//

// c++中, 类内的成员变量和成员函数分开存储, 只有非静态成员变量才属于类的对象

#include "iostream"

using namespace std;

class Person {
    int m_A; // 非静态成员变量 属于类的对象上
    static int m_B; // 静态成员变量 不属于类对象上

    void func(){}; // 非静态成员函数 不属于类对象上
    static void func2(){}; // 静态成员函数 不属于类的对象上
};

void test01() {
    Person p;
    // 空对象占用内存空间为 1个字节
    // c++编译器会给每个空对象也分配一个字节空间, 是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址
    cout << sizeof(p) << endl;
}

void test02() {
    Person p;
    cout << sizeof(p) << endl;
}

int main() {
    // 非空对象就按照对象数据类型分配即可
    test02();

    system("pause");
    return 0;
}