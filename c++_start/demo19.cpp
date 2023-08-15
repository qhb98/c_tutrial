//
// Created by 26513 on 2023/7/1.
//

// 指针配合数组和函数的案例 —— 封装一个函数, 利用冒泡排序, 实现对整型数组的升序排序
// int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5}

#include "iostream"

using namespace std;


// 冒泡排序函数
void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - i; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            // 如果j>j+i的值, 交换数字
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

// 打印数组
void printArray(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    // 先创建数组
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};

    // 数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    // 创建函数, 实现冒泡排序
    bubbleSort(arr, len);

    // 打印输出结果
    printArray(arr, len);

    return 0;
}