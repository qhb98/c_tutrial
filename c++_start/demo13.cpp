//
// Created by 26513 on 2023/6/23.
//
// 结构体 属于用户自定义的数据类型, 允许用户存储不同的数据类型
// struct 结构体名 {结构体成员列表};

#include "iostream"
#include "string"

using namespace std;

int main() {
    // 结构体创建变量的方式

    // 1. struct 结构体名 变量名
    struct student {
        string name;
        int age{};
        int score{};
    } s1;

    // 2. struct 结构体名 变量名 = {成员1值, 成员2值, ...}
    struct student s2 = {"da", 1, 29};
    cout << s2.name << endl;

    // 结构体数组 将自定义的结构体放入到数组中方便维护
    // struct 结构体名 数组名[元素个数] = {{}， {}， {}}
    struct student stu[3] = {
            {"da",  1, 2},
            {"qwe", 4, 6},
            {"fas", 2, 4}
    };
    // 给结构体数组中的元素赋值
    cout << stu[2].name << endl;

    // 结构体指针
    // 通过指针访问结构体中的成员
    struct student stu3 = {"fsd", 34, 109};
    student *p = &stu3;
    cout << p->name << endl;
    cout << p->score << endl;
    cout << p->age << endl;


    return 0;
}