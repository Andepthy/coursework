#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "请输入成绩：";
    cin >> number;
    if (number >= 90) {
        cout << "A" << endl;
    } else if (number >= 80) {
        cout << "B" << endl;
    } else if (number >= 70) {
        cout << "C" << endl;
    } else if (number >= 60) {
        cout << "D" << endl;
    } else {
        cout << "E" << endl;
    }
}