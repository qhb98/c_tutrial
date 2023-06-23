//
// Created by 26513 on 2023/6/23.
//
// 常量, 用于记录程序中不可更改的数据
// c++定义常量的两种方式:
// 1. #define 宏常量: #define 常量名 常量值, 通常在文件上方定义, 表示一个常量, 不可修改
// 2. const 数据类型 常量名 = 常量值, 通常在变量

#include "iostream"

// 定义一个宏常量, 不可修改
#define Day 7

using namespace std;

int main() {

    cout << "一周总共有 " << Day << " 天." << endl;

    // const修饰的变量也是常量
    const int month = 12;

    cout << "一年总共有 " << month << "个月份." << endl;

    system("pause");
    return 0;
}
