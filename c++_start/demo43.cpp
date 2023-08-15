//
// Created by 26513 on 2023/8/1.
//
#include "iostream"
#include "string"

using namespace std;


// c++ 允许一个类继承多个类, 多继承可能会引发父类中有同名成员出现,
// 需要加作用域区分, 实际开发中不建议使用多继承

// 菱形继承  加作用域区分即可
class Animal {
public:
    int m_Age;

};

class Sheep : public Animal {

};

class Tuo : public Animal {

};

class YangTuo : public Sheep, public Tuo {

};

void test01() {
    YangTuo yt;
    yt.Sheep::m_Age = 10;
    yt.Tuo::m_Age = 20;
    cout << yt.Sheep::m_Age << endl;
    cout << yt.Tuo::m_Age << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}