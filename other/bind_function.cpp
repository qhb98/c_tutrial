//
// Created by qhb on 2023/8/22.
//

// C++11中std::function与std::bind的使用
// std::function 是一组对象包装类的模板, 其实例可以对 普通函数 lambda表达式 函数指针 类的成员函数 以及 其他函数对象 等进行存储 复制和调用操作, 实质上是实现了一个泛型的回调机制
//

// std::bind 是c++标准库中的一个函数模板, 用于创建函数对象(也称为绑定器), 将参数绑定到函数中.
// 使用场景包括:
// 1. 参数绑定. 可以使用std::bind将函数的一部分参数绑定到特定的值或者对象上, 从而创建一个新的函数对象.
// 2. 非成员函数的绑定. std::bind可以用于绑定非成员函数(全局函数或者静态成员函数), 从而创建一个可调用的函数对象, 该对象可以在不传递任何对象的情况下调用
// 3. 成员函数的绑定. std::bind也可以用于绑定成员函数, 将对象的成员函数和对象本身绑定到一起, 从而创建一个函数对象, 这在需要将成员函数作为回调函数传递时非常有用.

//

#include "functional"
#include "iostream"

using namespace std;
using namespace std::placeholders; // bind的时候会用

void foo(int a, int b, int c) {
    std::cout << "a = " << a << " , b = " << b << " , c = " << c << endl;
}

int main() {
    auto func = std::bind(foo, 1, 2, std::placeholders::_1);
    func(3); // 调用func, 实际上调用foo(1, 2, 3)

    system("pause");
    return 0;
}