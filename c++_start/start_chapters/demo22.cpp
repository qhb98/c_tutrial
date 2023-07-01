//
// Created by 26513 on 2023/7/1.
//

// ��װ ���� �����������cube ������������������
// �ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

#include "iostream"

using namespace std;

// �����������
// 1.������������
// 2.�������
// 3.�����Ϊ ��ȡ��������������
// 4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

class Cube {
public:
    // ���ó�
    void setLength(int length) {
        m_L = length;
    }

    // ��ȡ��
    int getLength() const {
        return m_L;
    }

    void setWidth(int width) {
        m_W = width;
    }

    int getWidth() const {
        return m_W;
    }

    void setHeight(int height) {
        m_L = height;
    }

    int getHeight() const {
        return m_H;
    }

    // ��ȡ���������
    int calculateS() const {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }

    // ��ȡ���������
    int calculateV() const {
        return m_L * m_W * m_H;
    }

    // ���ó�Ա�����ж������������Ƿ����
    bool isSameByClass(Cube &c) {
        if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHeight()) {
            return true;
        }
        return false;
    }

private:
    int m_H = 10; // ��
    int m_L = 10; // ��
    int m_W = 10; // ��
};

// ����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube &c1, Cube &c2) {
    if (c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth()) {
        return true;
    }
    return false;
}


int main() {
    Cube c1;
    c1.setHeight(11);
    c1.setLength(11);
    c1.setWidth(11);

    Cube c2;
    c2.setHeight(11);
    c2.setLength(11);
    c2.setWidth(11);

    cout << c1.calculateS() << endl;
    cout << c1.calculateV() << endl;
    cout << c2.calculateS() << endl;
    cout << c2.calculateV() << endl;

    // ȫ�ֺ��������ж�
    bool ret = isSame(c1, c2);
    if (ret){
        cout << "�������������." << endl;
    } else{
        cout << "���������岻��." << endl;
    }

    // ��Ա���������ж�
    ret = c1.isSameByClass(c2);
    if (ret){
        cout << "�������������." << endl;
    } else{
        cout << "���������岻��." << endl;
    }

}

