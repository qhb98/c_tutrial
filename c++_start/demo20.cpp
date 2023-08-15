//
// Created by 26513 on 2023/7/1.
//

#include "iostream"

using namespace std;

// 设计一个学生类, 属性有姓名和学号
// 可以给姓名和学号赋值, 可以显示学生的姓名和学号

// 设计学生类
class Student {
public:
    // 类中的属性和行为, 统一称为成员
    // 成员属性/成员变量
    string m_Name;
    int m_Id;

    // 成员函数/成员方法
    // 显示学生信息
    void showStudent() {
        cout << m_Name << "    " << m_Id << " . " << endl;
    }

    // 给姓名赋值
    void setName(string name) {
        m_Name = name;
    }

    // 给学号赋值
    void setId(int id) {
        m_Id = id;
    }

};

int main() {
    // 创建一个具体学生, 实例化对象
    Student s1;

    // 给s1对象进行属性赋值操作
    s1.m_Name = "张三";
    s1.m_Id = 1;
    s1.showStudent();

    // 再创建一个学生, 实例化对象
    Student s2;
    s2.m_Name = "李四";
    s2.m_Id = 2;
    s2.showStudent();

    return 0;
}
