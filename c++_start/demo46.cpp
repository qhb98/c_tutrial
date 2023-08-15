//
// Created by 26513 on 2023/8/3.
//

#include "iostream"
#include "string"
#include "fstream"

using namespace std;

// 文件操作 程序运行时产生的数据都属于临时数据, 程序一旦运行结束都会释放, 通过文件可以将数据持久化

// 文件类型分为两种:
// 1. 文本文件 —— 文件以文本的ASCII码形式存储这计算机中
// 2. 二进制文件 ——文件以文本的二进制形式存储在计算机中, 用户一般不能直接读懂它们

// 操作文件的三大类
// 1. ofstream 写操作
// 2. ifstream 读操作
// 3. fstream 读写操作

// ios::in 为读文件而打开文件
// ios::out 为写文件而打开文件
// ios::ate 初始位置: 文件尾
// ios::app 追加方式写文件
// ios::trunc 如果文件存在先删除, 再创建
// ios::binary  二进制方式

// 1. 写文件 包含头文件 #include <fstream>
// 2. 创建流对象 ofstream ofs;
// 3. 打开文件  ofs.open("文件路径", 打开方式);
// 4. 写数据 ofs<<"写入的数据";
// 5. 关闭文件  ofs.close();

void test01(){
    // 创建流对象
    ofstream ofs;

    // 指定打开方式
    ofs.open("test.txt", ios::out);

    // 写数据
    ofs << "姓名: 张三" << endl;
    ofs << "性别: 男" << endl;
    ofs << "年龄: 18" << endl;

    // 关闭文件
    ofs.close();
}

int main() {
    test01();

    system("pause");
    return 0;
}