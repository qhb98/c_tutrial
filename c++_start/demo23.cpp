//
// Created by 26513 on 2023/7/1.
//

// 构造函数的分类及调用
// 两种分类方式, 按参数分为 有参构造和无参构造, 按类型分为 普通构造和拷贝构造
// 三种调用方式, 括号法 显示法 隐式转换法

#include "iostream"

using namespace std;

class Person {
public:
    // person的无参构造函数
    Person() {
        cout << "Person 的无参构造函数调用. " << endl;
    }

    // person的有参构造函数
    Person(int a) {
        age = a;
        cout << "Person 的有参构造函数调用." << endl;
    }

    //
    ~Person() {
        cout << "Person 的析构函数调用. " << endl;
    }

    // 拷贝构造函数
    Person(const Person &p) {
        // 将传入的人身上的所有属性都拷贝到我身上
        age = p.age;
    }

    int age = 10;

};

// 调用
void test01() {
    // 1. 括号法
    Person p1; // 默认构造函数调用
    Person p2(10); // 有参构造函数调用
    Person p3(p2); // 拷贝后构造函数调用

    // 注意事项: 默认调用构造函数的时候不要加 ()
    // 因为下面这行代码, 编译器会认为是一个函数的声明
//    Person p1();

    cout << p2.age << endl;
    cout << p3.age << endl;

    // 2. 显示法
    Person p4;  // 无参构造
    Person p5 = Person(10); // 有参构造
    Person p6 = Person(p5); // 拷贝构造

    // 匿名对象, 特点是当前行执行结束后, 系统会立即回收掉匿名对象
//    Person(10);
//    cout << "aaa" << endl;

    // 注意事项: 不要利用拷贝构造函数去初始化匿名对象, 因为编译器会认为Person(p6) == Person p6; 是在实例化对象
//    Person(p6);

    // 3. 隐式转换法
    Person p7 = 10; // 相当于Person p7 = Person(10);
    Person p8 = p6; // 拷贝构造

}

int main() {
    test01();

    system("pause");
    return 0;
}