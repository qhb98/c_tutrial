//
// Created by 26513 on 2023/8/15.
//

// STL 容器, 又称标准模板库 standard template library
// 广义上分为, 容器container 算法algorithm 迭代器iterator. 容器和算法之间通过迭代器进行无缝连接
// STL几乎所有的代码都采用了模板函数或者模板类

// STL六大组件
// 容器 —— 各种数据结构, 分为序列式容器(强调值的排序, 每个元素均有固定的位置)和关联式容器(二叉树结构, 各元素之间没有严格的物理上的顺序)
// 算法 ——
// 迭代器 —— 扮演了容器与算法之间的胶合剂
// 仿函数 —— 行为类似函数, 可以作为算法的某种策略
// 适配器 —— 一种用来修饰容器或者仿函数或者迭代器的接口的东西
// 空间配置器 —— 负责空间的配置与管理

// string 容器  string是c++风格的字符串
// char*是一个指针, string是一个类, 类的内部封装了char*
// 提供了很多成员方法, 如查找find, 拷贝copy, 删除delete, 替换replace, 插入insert
//


#include "iostream"
#include "string"
#include "vector"
#include "algorithm"


int main() {


    system("pause");
    return 0;
}


