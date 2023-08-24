//
// Created by qhb on 2023/8/24.
//

/*
 * 头文件 .h文件
 *  写类的声明, 包括类里面的成员和方法的声明、函数原型、#define常数等, 但一般来说不写出具体的实现
 *  .h叫做头文件, 不能被编译, #include 叫做预编译处理命令, 可以简单理解成为, 在.cpp文件中的 #include指令把.h文件中的代码在编译前添加到了1.cpp的头部
 *  每个.cpp文件会被编译, 生成一个.obj文件, 然后把所有的.obj文件链接起来, 你的可执行程序就算生成了
 *
 * 要在.h文件中严格区分声明语句和定义语句, 头文件中应只处理常量 变量 函数以及类等的声明. 变量的定义和函数的实现等都应该在源文件.cpp中进行.
 * 至于.h和.cpp具有同样的主文件名的情况, 对编译器来说没有意义, 编译器不会区匹配二者的主文件名, 只认#include等语句. 有利于模块化和源代码的重用.
 *
 * h文件中声明Declare, cpp文件中定义Define.
 *
 *  在写头文件的时候需要注意, 在开头和结尾处必须按照如下样式加上预编译语句
 *
 *  源文件主要写实现头文件中已经声明的哪些函数的具体代码, 开头必须#include一下实现的头文件, 以及要用到的头文件
 *
 *
 *
 *
 */
#include "iostream"
#include "head_source_file.h"

using namespace std;


Circle::Circle() {
    this->r = 5.0;
}

Circle::Circle(double R) {
    this->r = R;
}

double Circle::Area() {
    return 3.14 * r * r;
}

