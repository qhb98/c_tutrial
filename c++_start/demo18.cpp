//
// Created by 26513 on 2023/6/25.
//

// ���캯������������: ����ĳ�ʼ���������������ǳ���Ҫ�İ�ȫ����
// һ��������߱���û�г�ʼ״̬, ����ʹ�� �����δ֪��
// ͬ����ʹ����һ��������߱���, û�м�ʱ����, Ҳ�����һ���İ�ȫ����

// c++ �����˹��캯�������������������������, �������������ᱻ�������Զ�����
// ��ɶ���ĳ�ʼ������������, ����ĳ�ʼ�������������Ǳ�����ǿ��Ҫ��������, ������ṩ���������, �������ͻ��ṩ
// �������ṩ�Ĺ��캯�������������ǿ�ʵ��

// ���캯��: ��Ҫ�������ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ, ���캯���ɱ������Զ�����, �����ֶ�����
// ��������: ��Ҫ�������ڶ�������ǰϵͳ�Զ�����, ִ��һЩ��������

// ���캯�� ����(){}
// 1. ���캯�� û�з���ֵҲ��дvoid
// 2. ����������������ͬ
// 3. ���캯�������в���, ��˿��Է�������
// 4. �����ڵ��ö����ʱ����Զ����ù���, �����ֶ�����, ����ֻ�����һ��

// �������� ~����(){}
// 1. ��������, û�з���ֵҲ��дvoid
// 2. ����������������ͬ, ������ǰ���Ϸ��� ~
// 3. ���������������в���, ��˲����Է�������
// 4. �����ڶ�������ǰ���Զ���������, �����ֶ�����, ����ֻ�����һ��


#include "iostream"

using namespace std;

// ����ĳ�ʼ��������
class Person {
public:
    // ���캯�� �Զ�������ֻ����һ��
    Person() {
        cout << "Person ���캯���ĵ���." << endl;
    };

    // ��������
    ~Person() {
        cout << "Person ���������ĵ���." << endl;
    };

};

// ����������Ǳ���Ҫ�е�ʵ��, ��������Լ����ṩ, �������ͻ��ṩһ����ʵ�ֵĹ��������
void test01() {
    // ��Ϊ����ջ�ϵ�����, test01��ִ����Ϻ�ͻ��ͷ��������
    Person p;
}

int main() {
    // ע�����Ӻ�������main���������������
    test01();

    Person p1;

    system("pause");
    return 0;
}