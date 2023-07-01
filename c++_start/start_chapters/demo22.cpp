//
// Created by 26513 on 2023/7/1.
//

// 封装 —— 设计立方体类cube 求出立方体的面积和体积
// 分别用全局函数和成员函数判断两个立方体是否相等

#include "iostream"

using namespace std;

// 立方体类设计
// 1.创建立方体类
// 2.设计属性
// 3.设计行为 获取立方体面积和体积
// 4.分别利用全局函数和成员函数 判断两个立方体是否相等

class Cube {
public:
    // 设置长
    void setLength(int length) {
        m_L = length;
    }

    // 获取长
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

    // 获取立方体面积
    int calculateS() const {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }

    // 获取立方体体积
    int calculateV() const {
        return m_L * m_W * m_H;
    }

    // 利用成员函数判断两个立方体是否相等
    bool isSameByClass(Cube &c) {
        if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHeight()) {
            return true;
        }
        return false;
    }

private:
    int m_H = 10; // 高
    int m_L = 10; // 长
    int m_W = 10; // 宽
};

// 利用全局函数判断 两个立方体是否相等
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

    // 全局函数给出判断
    bool ret = isSame(c1, c2);
    if (ret){
        cout << "两个立方体相等." << endl;
    } else{
        cout << "两个立方体不等." << endl;
    }

    // 成员函数给出判断
    ret = c1.isSameByClass(c2);
    if (ret){
        cout << "两个立方体相等." << endl;
    } else{
        cout << "两个立方体不等." << endl;
    }

}

