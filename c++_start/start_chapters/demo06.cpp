//
// Created by 26513 on 2023/6/23.
//
// sizeof 关键字
// 可以使用sizeof求出数据类型占用内存的大小
// sizeof(数据类型/变量)

#include "iostream"

using namespace std;

int main() {
    short num1 = 10;
    long num2 = 10;
    int num3 = 10;
    long long num4 = 10;

    float num5 = 10;
    double num6 = 10;

    char ch1 = 'd';

    bool flag = true;

    cout << "short: " << sizeof(num1) << endl;
    cout << "int: " << sizeof(num2) << endl;
    cout << "long: " << sizeof(num3) << endl;
    cout << "long long: " << sizeof(num4) << endl;
    cout << "float: " << sizeof(num5) << endl;
    cout << "double: " << sizeof(num6) << endl;
    cout << "char: " << sizeof(ch1) << endl;
    cout << "bool: " << sizeof(flag) << endl;


    system("pause");
    return 0;
}
