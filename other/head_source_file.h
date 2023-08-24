//
// Created by qhb on 2023/8/24.
//


// 预编译语句, 防止重复编译, C___REPO_HEAD_SOURCE_FILE_H, 主要符合规范就行, 但最好要与文件名称一致
#ifndef C___REPO_HEAD_SOURCE_FILE_H
#define C___REPO_HEAD_SOURCE_FILE_H


// 代码写在这儿
class Circle {
private:
    double r; // 半径

public:
    Circle(); // 无参构造

    Circle(double R); // 有参构造函数
    double Area(); // 求面积函数
};


#endif //C___REPO_HEAD_SOURCE_FILE_H
