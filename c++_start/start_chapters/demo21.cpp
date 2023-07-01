//
// Created by 26513 on 2023/7/1.
//

// 在C++中 struct 和 class 的唯一区别在于, 默认的访问权限不同
// 区别:
// struct 默认权限为公共
// class 默认权限为私有

// 将成员属性设置为私有化
// 1. 将所有成员属性设置为私有, 可以自己控制读写权限
// 2. 对于写权限, 可以检测数据的有效性

#include "iostream"

using namespace std;

class C1 {
    int m_A; // 默认权限 是私有权限
};

struct C2 {
    int m_A; // 默认权限 是公共权限
};

class Person {
public:
    // 读姓名
    string getName() {
        return m_Name;
    }

    // 写姓名
    void setName(string name) {
        m_Name = name;
    }

    // 获取年龄
    int getAge() const {
        return m_Age;
    }

    // 写情人姓名
    void setLove(string love_name) {
        m_Love = love_name;
    }

private:
    // 姓名 可读可写
    string m_Name = "张三";
    // 年龄 只读
    int m_Age = 0;
    // 情人 只写
    string m_Love = "王五";

};

int main() {
    C1 c1;
//    c1.m_A =100;
    C2 c2;
    c2.m_A = 100;

    Person p;
    p.setName("李四");
    cout << p.getName() << endl;
    cout << p.getAge() << endl;
    p.setLove("五五");

    return 0;
}

