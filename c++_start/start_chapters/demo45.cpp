//
// Created by 26513 on 2023/8/3.
//

// 当子类重写父类的虚函数, 子类中的虚函数表内部会替换成子类的虚函数地址


#include "iostream"
#include "string"

using namespace std;

// 多态
class Animal {
public:
    virtual void speak() {
        cout << "animal is speaking" << endl;
    }

};

// cat
class Cat : public Animal {
public:
    void speak() {
        cout << "cat is speaking" << endl;
    }

};

// dog
class Dog : public Animal {
public:
    void speak() {
        cout << "dog is speaking" << endl;
    }

};

// 执行说话的函数
void doSpeak(Animal &animal) {
    animal.speak();
}

// 如果想输出cat speak, 就必须要让函数地址在运行阶段才绑定
void test01() {
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

void test02() {
    Animal animal;
    cout << sizeof(animal) << endl;
}


int main() {
    test01();
    test02();

    system("pause");
    return 0;
}