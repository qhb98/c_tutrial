//
// Created by 26513 on 2023/7/2.
//

// 深拷贝和浅拷贝 浅拷贝是简单的赋值拷贝操作  深拷贝是在堆区重新申请空间, 进行拷贝操作
// 如果利用编译器提供的拷贝构造函数 会做浅拷贝操作 浅拷贝带来的问题就是堆区的内存重复释放
// 浅拷贝的问题要利用深拷贝进行解决

#include "iostream"

using namespace std;

class Person {
public:
    Person() {
        cout << "Person的有参构造函数调用" << endl;
    }

    ~Person() {
        // 将堆区开辟的数据做释放操作
        if (m_Height != nullptr) {
            delete m_Height;
            m_Height = nullptr;
        }
        cout << "Person的析构函数调用" << endl;
    }

    // 自己实现拷贝构造函数 解决浅拷贝带来的问题
    Person(const Person &p) {
        cout << "Person的拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height);
    }

    Person(int age, int height) {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person的有参构造函数调用" << endl;
    }

    int m_Age;
    int *m_Height;

};


void test01() {
    Person p1(18, 160);
    cout << p1.m_Age << endl;
    cout << int(*p1.m_Height) << endl;

    Person p2(p1);
    cout << p2.m_Age << endl;
    cout << int(*p2.m_Height) << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}