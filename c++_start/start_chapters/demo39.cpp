//
// Created by 26513 on 2023/7/31.
//

// 递增运算符重载

#include "iostream"
#include "string"

using namespace std;

// 自定义整型
class MyInteger {
    friend ostream &operator<<(ostream &out, MyInteger my_int);

public:
    MyInteger() {
        m_Num = 0;
    }

    // 重载前置++运算符
    // 返回引用是为了一直对一个数据进行操作
    MyInteger &operator++() {
        // 先进行++运算
        m_Num++;
        // 再将自身返回
        return *this;
    }

private:
    int m_Num;
};

// 重载左移运算符
ostream &operator<<(ostream &out, MyInteger my_int) {
    out << my_int.m_Num;
    return out;
}

void test01() {
    MyInteger my_int;
    cout << ++(++my_int) << endl;
    cout << my_int << endl;
}


int main() {
    test01();
    int a =0;
    cout << "==================" << endl;

    cout << ++(++a) << endl;
    cout << a << endl;

    system("pause");
    return 0;
}