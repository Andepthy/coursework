#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int sumDigits(long long n) {
    n = llabs(n);
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}
int main() {
    int factorialN;
    cout << "请输入阶乘的 n（0 到 20）：";
    if (!(cin >> factorialN) || factorialN < 0 || factorialN > 20) {
        cout << "无效输入：阶乘应为 0 到 20 之间的整数。\n";
        return 1;
    }
    cout << factorialN << "! = " << factorial(factorialN) << endl;
    int fibonacciN;
    cout << "请输入斐波那契数列的项数 n（0 到 92）：";
    if (!(cin >> fibonacciN) || fibonacciN < 0 || fibonacciN > 92) {
        cout << "无效输入：n 应为 0 到 92 之间的整数。\n";
        return 1;
    }
    cout << "第 " << fibonacciN << " 项为：" << fibonacci(fibonacciN) << endl;
    long long number;
    cout << "请输入一个整数：";
    if (!(cin >> number)) {
        cout << "无效输入：请输入一个整数。\n";
        return 1;
    }
    cout << "各位数字之和：" << sumDigits(number) << endl;
    return 0;
}