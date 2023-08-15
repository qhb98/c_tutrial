//
// Created by 26513 on 2023/7/3.
//

// 空指针可以访问成员函数, 但是也要注意有没有用到this指针
// 如果用到this指针, 需要加以判断保证代码的健壮性

#include "iostream"

using namespace std;

// 空指针访问成员函数
class Person {
public:
    void showClassName() {
        cout << "this is person class" << endl;
    }

    void showPersonAge() {
        if (this == nullptr) {
            return;
        }
        // 报错是因为传入的指针是nullptr
        cout << "age = " << this->m_Age << endl;

    }

    int m_Age;

};

void test01() {
    Person *p = nullptr;

    p->showClassName();
    p->showPersonAge();

}

int main() {
    test01();

    system("pause");
    return 0;
}