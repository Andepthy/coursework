#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
void swapByPointer(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void swapByReference(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
int main() {
    int a, b;
    cout << "请输入两个整数：";
    cin >> a >> b;
    int valueA = a, valueB = b;
    cout << "\n值传递交换前：" << valueA << " " << valueB << endl;
    swapByValue(valueA, valueB);
    cout << "值传递交换后：" << valueA << " " << valueB << endl;
    int pointerA = a, pointerB = b;
    cout << "\n指针传递交换前：" << pointerA << " " << pointerB << endl;
    swapByPointer(&pointerA, &pointerB);
    cout << "指针传递交换后：" << pointerA << " " << pointerB << endl;
    int referenceA = a, referenceB = b;
    cout << "\n引用传递交换前：" << referenceA << " " << referenceB << endl;
    swapByReference(referenceA, referenceB);
    cout << "引用传递交换后：" << referenceA << " " << referenceB << endl;
    cout << "\n原始变量：" << a << " " << b << endl;
    return 0;
}