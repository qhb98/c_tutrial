//
// Created by 26513 on 2023/6/24.
//

// 函数默认参数, 在C++中函数的形参列表中的形参是可以有默认值的
// 返回值类型 函数名(参数=默认值){}
// 如果某个位置已经有了默认参数, 那么从这个位置往后, 从左到右都必须有默认值
// 如果函数声明有默认参数, 函数实现就不能有默认参数
// 函数实现和函数声明里只能有一个默认参数

// 函数占位参数, C++中函数的形参列表可以有占位参数, 用来做占位, 调用函数时必须要填补该位置
// 返回值类型 函数名(数据类型){}

// 函数重载
// 函数名可以相同, 提高复用性
// 函数重载满足条件: 1. 同一个作用域下, 2. 函数名称相同, 3. 函数参数类型不同, 或者个数不同或者顺序不同
// 函数的返回值不可以作为函数重载的条件

// 函数重载的注意事项, 1. 引用作为重载条件, 2. 函数重载碰到函数默认参数

// 函数分文件编写的步骤:
// 1. 创建后缀名为 .h 的头文件
// 2. 创建后缀名为 .cpp 的源文件
// 3. 在头文件中写函数的声明
// 4. 在源文件中写函数的定义

#include "iostream"

using namespace std;

// 函数重载
int func(int a, int b = 20, int c = 30) {
    return a + b + c;
}

float func(int a, float b) {
    return b;
}

// 函数声明
int func2(int a, int b);

int func2(int a, int b) {
    return a + b;
}

// 占位参数
void func3(int a, int) {
    cout << "this is func" << endl;
}

// 函数重载
void fun(int &a) {
    cout << "fun(&a) " << endl;
}

void fun(const int &a) {
    cout << "fun(const int &a)" << endl;
}

// main函数
int main() {
    int sum = func(10, 20, 30);
    cout << sum << endl;

    func3(10, 10);

    int a = 10;
    fun(a);
    fun(10);
    return 0;
}
