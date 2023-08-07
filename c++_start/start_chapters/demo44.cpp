//
// Created by 26513 on 2023/8/2.
//

// 多态, 是面向对象的三大特性之一, 主要分为两类:
// 静态多态: 函数重载和运算符重载属于静态多态, 复用函数名, 静态多态的函数地址早绑定 - 编译阶段确定函数地址
// 动态多态: 派生类和虚函数实现运行时多态, 动态多态的函数地址晚绑定 - 运行阶段确定函数地址

// 动态多态满足条件
// 1. 有继承关系
// 2. 子类要重写父类的虚函数

// 动态多态使用
// 父类的指针或者引用要执行子类对象

#include "iostream"
#include "string"

using namespace std;

// 多态
class Animal {
public:
    // 虚函数
    virtual void speak() {
        cout << "animal is speaking" << endl;
    }

};

// cat
class Cat : public Animal {
public:
    void speak() {
        cout << "cat is speaking" << endl;
    }

};

// dog
class Dog : public Animal {
public:
    // 此处函数重写, override是子类对父类的允许访问的方法的实现过程进行重新编写, 返回值和形参都不能改变.
    // 即外壳不变, 核心重写.
    // 重写发生在类的继承关系, 或者类的实现关系中的, 重写后的方法和原方法需要保持完全相同的返回值类型, 方法名
    // 参数个数以及参数类型
    void speak() {
        cout << "dog is speaking" << endl;
    }

};

// 执行说话的函数
void doSpeak(Animal &animal) {
    animal.speak();
}

// 如果想输出cat speak, 就必须要让函数地址在运行阶段才绑定
void test01() {
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main() {
    test01();

    system("pause");
    return 0;
}