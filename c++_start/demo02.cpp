//
// Created by 26513 on 2023/6/23.
//
// ����, ���ڼ�¼�����в��ɸ��ĵ�����
// c++���峣�������ַ�ʽ:
// 1. #define �곣��: #define ������ ����ֵ, ͨ�����ļ��Ϸ�����, ��ʾһ������, �����޸�
// 2. const �������� ������ = ����ֵ, ͨ���ڱ���

#include "iostream"

// ����һ���곣��, �����޸�
#define Day 7

using namespace std;

int main() {

    cout << "һ���ܹ��� " << Day << " ��." << endl;

    // const���εı���Ҳ�ǳ���
    const int month = 12;

    cout << "һ���ܹ��� " << month << "���·�." << endl;

    system("pause");
    return 0;
}
