//
// Created by 26513 on 2023/8/1.
//

#include "iostream"
#include "string"

using namespace std;

// 继承中的对象模型
class Base {
public:
    Base() {
        cout << "base构造函数" << endl;
    }

    ~Base() {
        cout << "base析构函数" << endl;
    }

    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

// 父类中所有的非静态成员属性都会被子类继承下去
// 父类中私有成员属性是被编译器隐藏了, 因此访问不到, 但是确实是被继承下去了
// 继承中的构造和析构顺序, 先父类构造 再子类构造 再父类析构 再子类析构
class Son : public Base {
public:
    Son() {
        cout << "son构造函数" << endl;
    }

    ~Son() {
        cout << "son析构函数" << endl;
    }

public:
    int m_D;
};

void test01() {
    cout << sizeof(Son) << endl;
};

void test02() {
//    Base b;
    Son s;
}

int main() {
    test01();
    test02();

    system("pause");
    return 0;
}
