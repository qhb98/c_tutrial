//
// Created by 26513 on 2023/7/1.
//

// ���캯���ķ��༰����
// ���ַ��෽ʽ, ��������Ϊ �вι�����޲ι���, �����ͷ�Ϊ ��ͨ����Ϳ�������
// ���ֵ��÷�ʽ, ���ŷ� ��ʾ�� ��ʽת����

#include "iostream"

using namespace std;

class Person {
public:
    // person���޲ι��캯��
    Person() {
        cout << "Person ���޲ι��캯������. " << endl;
    }

    // person���вι��캯��
    Person(int a) {
        age = a;
        cout << "Person ���вι��캯������." << endl;
    }

    //
    ~Person() {
        cout << "Person ��������������. " << endl;
    }

    // �������캯��
    Person(const Person &p) {
        // ������������ϵ��������Զ�������������
        age = p.age;
    }

    int age = 10;

};

// ����
void test01() {
    // 1. ���ŷ�
    Person p1; // Ĭ�Ϲ��캯������
    Person p2(10); // �вι��캯������
    Person p3(p2); // �������캯������

    // ע������: Ĭ�ϵ��ù��캯����ʱ��Ҫ�� ()
    // ��Ϊ�������д���, ����������Ϊ��һ������������
//    Person p1();

    cout << p2.age << endl;
    cout << p3.age << endl;

    // 2. ��ʾ��
    Person p4;  // �޲ι���
    Person p5 = Person(10); // �вι���
    Person p6 = Person(p5); // ��������

    // ��������, �ص��ǵ�ǰ��ִ�н�����, ϵͳ���������յ���������
//    Person(10);
//    cout << "aaa" << endl;

    // ע������: ��Ҫ���ÿ������캯��ȥ��ʼ����������, ��Ϊ����������ΪPerson(p6) == Person p6; ����ʵ��������
//    Person(p6);

    // 3. ��ʽת����
    Person p7 = 10; // �൱��Person p7 = Person(10);
    Person p8 = p6; // ��������

}

int main() {
    test01();

    system("pause");
    return 0;
}