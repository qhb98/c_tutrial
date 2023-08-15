//
// Created by 26513 on 2023/6/23.
//
/*
 * 程序流程结构:
 * 1. 选择结构 依据条件是否满足, 有选择地执行相应的功能
 *
 *
 * 2. 顺序结构 程序按顺序执行, 不发生跳转
 *
 *
 * 3. 循环结构 依据条件是否满足, 循环多次执行某段代码
 *
 *
 */

#include "iostream"

using namespace std;


int main() {
    // =========== 选择结构 if语句
    // 用户输入分数, 如果分数大于600, 视为考上一本大学, 在屏幕上输出
    // 1. 用户输入分数
    int score = 0;
    cout << "input score: " << endl;
    cin >> score;

    // 2. 打印用户输入的分数
    cout << score << endl;

    // 3. 判断分数是否大于600, 如果大于, 那么输出
    if (score > 600) {
        cout << "yes." << endl;
    } else if (score > 300) {
        cout << "just so so." << endl;
    } else {
        cout << "no." << endl;
    }

    // =============== 三目运算符 —— 表达式1 ? 表达式2 : 表达式3
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c= " << c << endl;

    // =============== switch选择语句
    switch (score) {
        case 10:
            cout << "不及格" << endl;
            break;
        case 100:
            cout << "满分" << endl;
            break;
        case 60:
            cout << "及格" << endl;
            break;
        default:
            cout << "未知" << endl;
            break;
    }

    // ============ while循环语句
    int num = 0;
    while (num <= 10) {
        cout << num << endl;
        num++;
    }


    system("pause");
    return 0;
}