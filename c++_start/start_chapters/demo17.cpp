//
// Created by 26513 on 2023/6/25.
//
#include "iostream"

using namespace std;


// 成员属性设置为私有
// 1. 可以自己控制读写权限
// 2.

class Person {
public:
    void setName(string name) {
        m_Name = name;
    }

    string getName() {
        return m_Name;
    }

    int getAge() const{
        return m_Age;
    }

private:
    string m_Name;
    int m_Age;
    string m_Lover;
};

int main() {
    Person p;
    p.setName("da");
    cout << p.getName() << endl;
    cout << p.getAge() << endl;

    return 0;
}