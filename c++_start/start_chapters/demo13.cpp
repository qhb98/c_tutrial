//
// Created by 26513 on 2023/6/23.
//
// �ṹ�� �����û��Զ������������, �����û��洢��ͬ����������
// struct �ṹ���� {�ṹ���Ա�б�};

#include "iostream"
#include "string"

using namespace std;

int main() {
    // �ṹ�崴�������ķ�ʽ

    // 1. struct �ṹ���� ������
    struct student {
        string name;
        int age{};
        int score{};
    } s1;

    // 2. struct �ṹ���� ������ = {��Ա1ֵ, ��Ա2ֵ, ...}
    struct student s2 = {"da", 1, 29};
    cout << s2.name << endl;

    // �ṹ������ ���Զ���Ľṹ����뵽�����з���ά��
    // struct �ṹ���� ������[Ԫ�ظ���] = {{}�� {}�� {}}
    struct student stu[3] = {
            {"da",  1, 2},
            {"qwe", 4, 6},
            {"fas", 2, 4}
    };
    // ���ṹ�������е�Ԫ�ظ�ֵ
    cout << stu[2].name << endl;

    // �ṹ��ָ��
    // ͨ��ָ����ʽṹ���еĳ�Ա
    struct student stu3 = {"fsd", 34, 109};
    student *p = &stu3;
    cout << p->name << endl;
    cout << p->score << endl;
    cout << p->age << endl;


    return 0;
}