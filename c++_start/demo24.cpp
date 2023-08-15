//
// Created by 26513 on 2023/7/1.
//

// 拷贝构造函数调用时机
// c++ 中拷贝构造函数调用时机 通常有三种情况
// 1. 使用一个已经创建完毕的对象来初始化一个新对象
// 2. 值传递的方式给函数参数传值
// 3. 以值方式返回局部对象

// 默认情况下, c++ 编译器至少给一个类添加3个函数
// 1. 默认构造函数 无参 函数体为空
// 2. 默认析构函数 无参 函数体为空
// 3. 默认拷贝构造函数 对属性进行值拷贝

// 构造函数调用规则:
// 1. 如果用户定义有参构造函数 c++不再提供默认无参构造 但是会提供默认拷贝构造
// 2. 如果用户定义拷贝构造函数 c++不会再提供其他构造函数
// 3. 创建一个类, c++编译器会给每个类都添加至少3个函数

#include "iostream"

using namespace std;

class Person {
public:
    Person() {
        cout << "构造函数." << endl;
    }

    ~Person() {
        cout << "析构函数." << endl;
    }

    Person(int age) {
        cout << "有参构造函数调用" << endl;
        m_Age = age;
    }

    Person(const Person &p) {
        cout << "拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
    }

    int m_Age;

};

// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
    Person p1(20);
    Person p2(p1);

    cout << "p2 的年龄为: " << p2.m_Age << endl;
}

// 2. 值传递的方式给函数参数传值
void doWork(Person p) {}

void test02() {
    Person p;
    doWork(p);
}

// 3. 值方式返回局部对象
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
