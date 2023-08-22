## 这是学习c++技术栈的记录说明

[主要学习渠道] B站黑马程序员
https://www.bilibili.com/video/BV1et411b73Z/?p=2&vd_source=7111d4cfa9354342c253c06ecdd64e2f

[README] from 2023.6.23


# ===== 部分有趣记录  ====== #

### 1. clion中创建多个子目录或者子工程

https://blog.csdn.net/weixin_40040107/article/details/108167589

### 2. #pragma once 和 #ifndef

https://blog.csdn.net/weixin_41055260/article/details/122994997

2.1 两者的使用方式

    //方式一：
    #ifndef  __SOMEFILE_H__
    #define   __SOMEFILE_H__
    ... ... // 声明、定义语句
    #endif
    
    //方式二：
    #pragmaonce
    ... ... // 声明、定义语句

2.2 两者的特点

    #ifndef 
        受C++语言标准支持, 不仅可以保证同一个文件不会被包含多次, 也能保证内容完全相同的两个文件或者代码片段不会被不小心同时包含. 
    但是, 由于编译器每次都需要打开头文件才能判定是否有重复定义, 因此在编译大型项目时, ifndef会使得编译时间相对较长, 因此一些编译器
    会逐渐开始支持#pragma once的方式. ifndef不受编译器的限制, 

    #pragma once
        一般由编译器提供保证: 同一个文件不会被包含多次. 这里的同一个文件是指物理上的一个文件, 而不是指内容相同的两个文件.
    我们无法对一个头文件中的一段代码做pragma once声明, 而只能针对文件. 其次不必再担心宏名冲突, 大型项目的编译速度也因此可以提高一些.
    对应的缺点是, 如果某个头文件有多份拷贝, 本方法不能保证他们不被重复包含. 这种方式不支持跨平台.


