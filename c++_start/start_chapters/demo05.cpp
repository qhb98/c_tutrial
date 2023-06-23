//
// Created by 26513 on 2023/6/23.
//
// 数据类型存在的意义就是给变量分配合适的内存空间
/*
 * 1. 整型 表示的是整数类型的数据
 * 短整型 short 占用2个字节, 取值范围 -2^15 ~ 2^15-1
 * 整型 int 占用4个字节, 取值范围 -2^31 ~ 2^31-1
 * 长整型 long 占用8字节, 取值范围 -2^31 ~ 2^31-1
 * 长长整型 long long 占用8字节, 取值范围 -2^63 ~ 2^63-1
 * short < int <= long <= long long
 *
 * 2. 实型(浮点型) 用于表示小数
 * 浮点型变量分为两种: 单精度float, 双精度double
 * 单精度float 占用内存空间4字节, 有效数字范围为7位有效数字
 * 双精度double 占用内存空间8字节, 有效数字范围为15~16位有效数字
 *
 * 3. 字符型, 字符型变量用于显示单个字符
 *  char ch = 'a'
 * 字符型变量只占用1个字节, 并不是把字符本身放到内存中去存储, 而是将对应的ASCII编码放入到存储单元
 * 创建字符型变量的时候要用单引号, 单引号内只能有一个字符
 *
 * 4. 转义字符, 用于表示一些不能显示出来的ASCII字符
 * 现阶段常用的有 \n \\ \t
 *
 * 5. 字符串型, 用于表示一串字符, 字符串是双引号, 字符是单引号
 * string 变量名 = "字符串值"
 *
 * 6. 布尔类型, 布尔类型表示真或者假的值, bool类型只有两个值 true false
 *  布尔类型的数据占用内存空间为1个字节
 *
 * 数据输入
 *
 *
 *
 */

#include "iostream"
#include "string"

using namespace std;

int main() {
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;

    float num5 = 3.14f;
    double num6 = 3.14;

    char ch1 = 'd';

    // C风格的字符串和单个字符
    char str1[] = "hello world";
    char str2 = 'h';

    // C++风格的字符串
    string str3 = "hello world";

    bool flag = true;


    // ====================================== //

    cout << "num1: "<< num1 << endl;
    cout << "num2: "<< num2 << endl;
    cout << "num3: "<< num3 << endl;
    cout << "num4: "<< num4 << endl;
    cout << "num5: "<< num5 << endl;
    cout << "num6: "<< num6 << endl;
    cout << "ch1: "<< ch1 << endl;

    // 字符型变量对应的ASCII编码
    cout << "ch1 ASCII: "<< int(ch1) << endl;

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;

    cout << "flag: " << flag << endl;

    // ====================================== //

    system("pause");
    return 0;
}
