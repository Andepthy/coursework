#include <iostream>
#include <algorithm>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int maxValue(int a, int b, int c) {
    return max(a, max(b, c));
}
bool isEven(int num) {
    return num % 2 == 0;
}
int sumToN(int n) {
    return n * (n + 1) / 2;
}
int main() {
    int a, b;
    cout << "请输入两个整数：";
    cin >> a >> b;
    cout << "两数之和：" << sum(a, b) << endl;
    int x, y, z;
    cout << "请输入三个整数：";
    cin >> x >> y >> z;
    cout << "最大值：" << maxValue(x, y, z) << endl;
    int number;
    cout << "请输入一个整数，判断是否为偶数：";
    cin >> number;
    cout << number << (isEven(number) ? "是偶数。\n" : "是奇数。\n");
    int n;
    cout << "请输入 n，计算 1 到 n 的和：";
    cin >> n;
    cout << "1 到 n 的和：" << sumToN(n) << endl;
    return 0;
}