//
// Created by 26513 on 2023/7/2.
//

// ��̬��Ա����
// ���ж�����ͬһ������
// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

#include "iostream"

using namespace std;

class Person {
public:
    static void func() {
        // ��̬��Ա�������Է��ʾ�̬��Ա����
        m_A = 100;
        // ��̬��Ա���������Է��ʷǾ�̬��Ա����
//        mm_B = 200;

        cout << "static void func ����" << endl;
    }

    // ��̬��Ա����
    static int m_A;
    // �Ǿ�̬��Ա����
    int mm_B;

private:
    static void func2(){
        cout << "static void func2 ����" << endl;
    }

};

void test01() {
    //1. ͨ���������
    Person p;
    p.func();
    //2. ͨ����������
    Person::func();

    // ������ʲ���˽�о�̬��Ա����
//    Person::func2();

};

int main() {
    test01();

    system("pause");
    return 0;
}
