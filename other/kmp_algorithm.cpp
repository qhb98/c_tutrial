//
// Created by qhb on 2023/8/24.
//

#include "iostream"
#include "string"
#include "vector"
#include "malloc.h"
#include "stdio.h"

using namespace std;

// 串匹配算法 —— 用于为区域方向和车辆路径方向匹配做算法基础

/*
 * 串的模式匹配算法：
 *
 * 1. 参考链接：
 *  https://blog.csdn.net/starstar1992/article/details/54913261
 *  https://blog.csdn.net/u012948161/article/details/126241717
 *
 */

// 2. 简单模式匹配
// *  思想: 从主串的第一个位置起和模式串的第一个字符进行匹配, 如果相等则继续匹配, 否则从主串的第二个字符开始逐一比较. 以此类推, 直到全部匹配完成.
// 一般匹配字符串时，我们从目标字符串str（假设长度为n）的第一个下标选取和ptr长度（长度为m）一样的子字符串进行比较.
// 如果一样，就返回开始处的下标值，不一样，选取str下一个下标，同样选取长度为n的字符串进行比较，直到str的末尾（实际比较时，下标移动到n-m）
// 时间复杂度 O(m*n)  空间复杂度 O(1)

int simple_find(string str, string sub_str) {
    int i, j, k;
    i = 0;
    j = 0;
    k = i;
    while (i < str.length() && j < sub_str.length()) {
        if (str.at(i) == sub_str.at(i)) {
            ++i;
            ++j;
        } else {
            j = 0;
            i = ++k; // k存储着每次i开始匹配的位置, 每一次都从i上次开始的位置的后一个位置开始匹配
        }
    }
    // 全部匹配完子串, 找到位置了
    if (j == sub_str.length()) {
        // 返回子串在主串的位置
        return k;
    }
    return 0;
}


// 3. KMP匹配算法
// 字符串匹配算法, 给两个字符串, 寻找其中一个字符串是否包含另一个字符串, 如果包含, 返回包含的起始位置.
// KMP匹配的一个核心思路就是: 如果某个位置匹配失败, 移动到这个位置之前的字符串的最长前缀的下一个字符继续匹配
// 时间复杂度 O(m+n)
// 最长前缀: 一个字符串的前n个字符和后n个字符, 分别是它的前缀和后缀, 如果前缀和后缀相同, 就可以对齐了.

// 计算最长前缀的长度
// 如果要计算到某个位置字符串的最长前缀长度, 只需要将这个字符和其之前字符串的最长前缀的下一个字符对比, 如果相同, 则其最长前缀长度就是前面字符串的最长前缀长度+1
void cal_next(const char *str, int *next, int len) {
    next[0] = -1;//next[0]初始化为-1，-1表示不存在相同的最大前缀和最大后缀
    // next数组保存的不是最长前缀的长度, 而是对应的下标. 是模式串各个位置的字符匹配失败时应该往前回溯的位置, 其值等于到该位置字符串的最长前缀的长度-1
    int k = -1;//k初始化为-1
    for (int q = 1; q <= len - 1; q++) {
        while (k > -1 && str[k + 1] != str[q])//如果下一个不同，那么k就变成next[k]，注意next[k]是小于k的，无论k取任何值。
        {
            k = next[k];//往前回溯
        }
        if (str[k + 1] == str[q])//如果相同，k++
        {
            k = k + 1;
        }
        next[q] = k;//这个是把算的k的值（就是相同的最大前缀和最大后缀长）赋给next[q]
    }
}

// KMP匹配算法
void KMP(const char *str, int slen, const char *ptr, int plen) {
    int *next = new int[plen];
    cal_next(ptr, next, plen);//计算next数组
    int k = -1;
    for (int i = 0; i < slen; i++) {
        while (k > -1 && ptr[k + 1] != str[i])//ptr和str不匹配，且k>-1（表示ptr和str有部分匹配）
            k = next[k];//往前回溯
        if (ptr[k + 1] == str[i])
            k = k + 1;
        if (k == plen - 1)//说明k移动到ptr的最末端
        {
            //cout << "在位置" << i-plen+1<< endl;
            //k = -1;//重新初始化，寻找下一个
            //i = i - plen + 1;//i定位到该位置，外层for循环i++可以继续找下一个（这里默认存在两个匹配字符串可以部分重叠），感谢评论中同学指出错误。
            cout << i - plen + 1 << endl;//返回相应的位置
        }
    }
}

// const char *ptr 定义一个指向字符常量的指针, 这里, ptr是一个指向char*类型的常量, 所以不能用ptr来修改所指向的内容, 即*ptr的值为const, 不能修改
// char * const ptr 定义一个指向字符的指针常量, 即const指针
int main() {
    const char *str = "bacbababadababacambabacaddababacasdsd";
    const char *ptr = "ababaca";
    KMP(str, 36, ptr, 7);
    return 0;
}






