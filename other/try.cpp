//
// Created by qhb on 2023/8/29.
//

#include "iostream"
#include "vector"

using namespace std;

void try1() {
    std::vector<int> old_v;
    std::vector<int> new_v;
    std::vector<int> new_v_v;
    std::vector<int> new_v_v_v;

    int num = 10;

    for (int i = 0; i < num; i++) {
        old_v.push_back(i + 1);
    }
    for (int j = 0; j < old_v.size(); j++) {
        new_v.push_back(old_v.at(j));
    }
    for (auto &iter: old_v) {
        new_v_v.push_back(iter);
    }
    for (int j = old_v.size() - 1; j >= 0; j--) {
        new_v_v_v.push_back(old_v.at(j));
    }

    cout << "finish" << endl;

}

int main() {
    try1();

    system("pause");
    return 0;
}

