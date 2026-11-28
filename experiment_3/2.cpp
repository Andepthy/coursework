#include <iostream>
using namespace std;
int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int leastCommonMultiple(int a, int b) {
    return a * b / greatestCommonDivisor(a, b);
}
int main() {
    int a, b;
    cout << "请输入两个正整数：";
    if (!(cin >> a >> b)) {
        cout << "输入无效，请输入两个正整数。\n";
        return 1;
    }
    if (a <= 0 || b <= 0) {
        cout << "输入错误：两个数都必须是正整数。\n";
        return 1;
    }
    cout << "最大公约数：" << greatestCommonDivisor(a, b) << endl;
    cout << "最小公倍数：" << leastCommonMultiple(a, b) << endl;
    return 0;
}