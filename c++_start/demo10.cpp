//
// Created by 26513 on 2023/6/23.
//
// 二维数组 就是在一维数组上多加一个维度
// 二维数组的数组名可以用于查看二维数组所占的内存空间大小, 可以获取二维数组的首地址


#include "iostream"

using namespace std;


int main() {
    // 数据类型 数组名[行数][列数]
    int arr[4][4];
    arr[0][0] = 1;
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[0][3] = 3;
    arr[1][0] = 1;
    arr[2][0] = 1;
    // 外层循环打印行数, 内层循环打印列数
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << endl;
        }
    }

    // 数据类型 数组名[行数][列数] = {{值1, 值2, ...},{值3, 值4, ...}}
    int arr1[4][4] = {
            {0,1,2,3},
            {10,11,12,13},
            {20,21,22,23},
            {30,31,32,33},
    };
    // 外层循环打印行数, 内层循环打印列数
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr1[i][j] << endl;
        }
    }

    // 数据类型 数组名[行数][列数] = {数1, 数2, ...}
    int arr2[2][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr2[i][j] << endl;
        }
    }

    // 数据类型 数组名[][列数] = {数1, 数2, ...}
    int arr3[][3] =  {1,2,3,4,5,6};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr3[i][j] << endl;
        }
    }

    // 查看二维数组占用的内存空间
    cout << sizeof(arr3)/ sizeof(arr3[0][0]) << endl;
    cout << sizeof(arr3)/ sizeof(arr3[0]) << endl;

    system("pause");
    return 0;
}
