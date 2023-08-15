//
// Created by 26513 on 2023/7/31.
//

/*
 * 继承 面向对象三大特性之一, 可以有效减少重复代码
 * 继承的基本语法 —— class 子类(派生类): 继承方式 父类(基类)
 * 派生类中的成员, 包含两大部分. 一类是从基类继承过来的, 一类是自己增加的成员
 * 继承方式:
 * 1. 公共继承 public
 * 2. 私有继承 private
 * 3. 保护继承 protected
 *
 */

#include "iostream"
#include "string"

using namespace std;

class BasePage {
public:
    void header() {
        cout << "header" << endl;
    }

    void footer() {
        cout << "footer" << endl;
    }

    void left() {
        cout << "left" << endl;
    }

};

class Java : public BasePage {
public:
    void content() {
        cout << "java video" << endl;
    }

};

class Python : public BasePage {
public:
    void content() {
        cout << "python video" << endl;
    }
};

void test01() {
    Java ja;

    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    Python py;
    py.header();
    py.left();
    py.footer();
    py.content();
}

/*
 * 三种继承方法的特点
 */
class A {
public:
    int a;
protected:
    int b;
private: // 私有属性, 无论哪种继承方法都无法访问, 其实是继承下来了的, 只是无法访问而已
    int c;
};

// 公共继承
class B : public A {
public:
    int a;
protected:
    int b;
};

// 保护继承
class C : protected A {
protected:
    int a;
    int b;
};

// 私有继承
class D : private A {
private:
    int a;
    int b;
};

int main() {
    test01();

    system("pause");
    return 0;
}