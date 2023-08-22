//
// Created by qhb on 2023/8/22.
//
/*
 * 移动语义 —— 将数据从一个对象中转移到另一个对象中, 从而避免拷贝操作带来的性能损耗
 * —— https://zhuanlan.zhihu.com/p/455848360
 *
 *
 *
 */

#include "iostream"
#include "vector"
using namespace std;


class MyClass {
public:
    MyClass(const std::string &s) : str{s} {};

private:
    std::string str;

};

int main() {
    std::vector<MyClass> myClasses;
    MyClass tmp{"hello"};
    myClasses.push_back(tmp);
//    myClasses.push_back(tmp);
    myClasses.push_back(std::move(tmp));


    system("pause");
    return 0;
}