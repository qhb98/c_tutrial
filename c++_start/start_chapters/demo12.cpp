//
// Created by 26513 on 2023/6/23.
//
// 指针  就是 地址
// 作用: 可以通过指针间接访问内存, 内存编号是从0开始的, 一般用十六进制数表示, 可以利用指针变量保存地址

// 指针所占用的内存空间为 4个字节空间(在32位操作系统下), 在64位操作系统下占用8个字节空间

// 空指针 指针变量指向内存中编号为0的空间为空指针, 用于初始化指针变量, 指向的内存不可以访问

// 野指针 指针变量指向非法的内存空间


#include "iostream"

using namespace std;

void swap01(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap02(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main() {
    // 如何定义一个指针 数据类型 * 指针变量名
    int a = 10;
    int *p;
    // 让指针p记录变量a的地址
    p = &a;
    cout << "a location: " << &a << endl;
    cout << "p value is: " << p << endl;

    // 如何使用指针
    // 可以通过解引用的方式来找到指针指向的内存, 指针前加*代表解引用, 找到指针指向的内存中的数据
    cout << "*p = " << *p << endl;

    // 指针所占的内存空间 与数据类型无关
    int b = 10;
    int *f = &b;
    cout << sizeof(int *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(f) << endl;

    // 空指针 用于给指针变量进行初始化
    int *g = nullptr;

    // 空指针是不可以进行访问的
    // 0~255之间的内存编号是系统占用的, 因此不可以访问
    *p = 100;

    // 野指针  在程序中要尽量避免出现野指针
    // int *j = (int *)0x1100;
    // 访问野指针会报错
    // cout << *j << endl;

    // const修饰指针 常量指针, 指针的指向可以修改, 但是指针指向的值不可以修改, 这时候指针指向的是地址
    int q = 10;
    int w = 10;
    const int *h = &q;
    // *h = 20;
    h = &w;

    // const修饰常量 指针常量, 指针的指向不可以修改, 但是指针指向的值可以改, 地址是固定的常量, 所以只能改值
    int k = 20;
    int l = 20;
    int *const i = &k;

    // const既修饰常量又修饰指针, 指针的指向不可以修改, 且指向的值也不可以修改
    int e = 10;
    int r = 10;
    const int *const t = &e;

    // 指针和数组
    // 利用指针访问数组中的元素
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    // 创建一个指针指向数组, 也就是指向数组的首地址
    int *u = arr;
    cout << *u << endl;
    // 让指针向后偏移8个字节
    u++;
    cout << *u << endl;

    // 利用指针遍历数组
    int *u1 = arr;
    for (int i = 0; i < 5; i++) {
        cout << *u1 << endl;
        u1++;
    }

    // 指针和函数
    // 1. 值传递 值传递不可以修饰实参
    int aa = 10;
    int bb = 20;
    swap01(aa, bb);

    // 2. 地址传递
    // 地址传递可以修饰实参
    swap02(&aa, &bb);


    return 0;
}