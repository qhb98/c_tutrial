//
// Created by 26513 on 2023/7/2.
//

// 类对象作为类成员
// c++类中的成员是另一个类的对象, 称该成员为对象成员
// 当其他类对象作为本类成员, 构造时先构造类对象, 再构造自身, 析构的顺序与构造相反

#include "iostream"

using namespace std;

class Phone {
public:
    Phone(string name) {
        cout << "phone的有参构造函数" << endl;
        p_Name = name;
    }

    ~Phone(){
        cout << "phone的析构函数" << endl;
    }

    string p_Name;
};

// 类对象作为类成员
class Person {
public:
    Person(string name, string pName) : m_Name(name), m_Phone(pName) {
        cout << "person的构造函数调用" << endl;
    }

    string m_Name;
    Phone m_Phone;
};


void test01() {
    Person p("张三", "华为手机");
    cout << p.m_Name << endl;
    cout << p.m_Phone.p_Name << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}