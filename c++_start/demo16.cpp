//
// Created by 26513 on 2023/6/24.
//
// 类和对象
// C++面向对象的三大特性为: 封装 继承 多态

// 封装 —— 封装是C++面向对象的三大特性之一
// 封装的意义是: 1. 将属性和行为作为一个整体, 表现生活中的事物
// 2. 将属性和行为加以权限控制
// class 类名{访问权限: 属性/行为};

// 访问权限:
// public 公共权限 —— 成员类内可以访问, 类外也可以访问
// protected 保护权限 —— 成员类内可以访问, 类外不可以访问 子类可以访问父类的保护权限
// private 私有权限 —— 成员类内可以访问, 类外不可以访问 子类不可以访问父类的私有权限

// struct和class的区别
// struct默认权限为公共, class默认权限为私有

#include "iostream"
using namespace std;

const double PI = 3.14;

// 人 类
class Person {
public:
    // 公共权限
    string m_Name;

protected:
    // 保护权限
    string m_Car;

private:
    // 私有权限
    int m_Password;

public:
    void func() {
        m_Name = "da";
        m_Car = "q";
        m_Password = 123;
    }
};

// 设计一个圆类
class Circle {
    // 访问权限
    // 公共权限
public:
    // 属性
    int m_r;

    // 行为
    // 获取圆的周长
    double calculate_ZC() {
        return 2 * PI * m_r;
    }

};

int main() {
    // 通过圆类创建具体的圆(对象)
    // 实例化 通过一个类创建一个对象的过程
    Circle c1{};
    // 给圆对象的属性进行赋值
    c1.m_r = 10;
    cout << c1.calculate_ZC() << endl;

    Person p1;
    p1.m_Name = "qwe";
    p1.func();

    return 0;
}