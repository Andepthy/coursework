#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "请输入两个整数：";
    cin >> a >> b;
    int* p = &a;
    int* q = &b;
    cout << "交换前：a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "临时变量交换后：a = " << a << ", b = " << b << endl;
    cout << "指针交换前：*p = " << *p << ", *q = " << *q << endl;
    temp = *p;
    *p = *q;
    *q = temp;
    cout << "指针交换后：a = " << a << ", b = " << b << endl;
    cout << "指针的值：*p = " << *p << ", *q = " << *q << endl;
    return 0;
}