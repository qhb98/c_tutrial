//
// Created by 26513 on 2023/6/23.
//

// 函数  将一段经常使用的代码封装起来, 减少重复代码
// 一个较大的程序往往都分为若干个程序块, 每个模块实现特定的功能
// 函数的定义:
// 1. 返回值类型
// 2. 函数名
// 3. 参数表列
// 4. 函数体语句
// 5. return表达式

// 值传递 函数调用的时候函数的形参发生改变不会影响实参

// 函数声明  告诉编译器函数的名称以及如何调用函数, 函数的实际主体可以单独定义
// 函数的声明可以多次, 但是函数的定义只能有一次

#include "iostream"

using namespace std;

// 子函数
int add(int num1, int num2) {
    int sum = 0;
    sum = num1 + num2;
    return sum;
}

void swap(int num1, int num2) {
    cout << num1 << endl;
    cout << num2 << endl;
    int tmp_num = 0;
    tmp_num = num1;
    num1 = num2;
    num2 = tmp_num;
    cout << num1 << endl;
    cout << num2 << endl;
}

int max(int a, int b);
int max(int a);
int max(int a, float b);


// 主函数
int main() {
    int sum = add(1, 2);
    cout << sum << endl;

    swap(1, 2);

    system("pause");
    return 0;
}


