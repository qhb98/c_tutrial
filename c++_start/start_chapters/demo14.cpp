//
// Created by 26513 on 2023/6/23.
//
// 引用  给变量起别名
// 数据类型 &别名=原名

// 引用必须初始化, 引用在初始化后不可以改变


#include "iostream"

using namespace std;

int main() {
    // 起别名
    int a = 10;
    int &b = a;
    cout << a << ", " << b << endl;

    b = 100;
    cout << a << ", " << b << endl;
    return 0;
}