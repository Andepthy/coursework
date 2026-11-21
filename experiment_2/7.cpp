#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "请输入整数个数：";
    if (!(cin >> n) || n <= 0) {
        cout << "整数个数必须为正数。\n";
        return 0;
    }
    int* arr = new int[n];
    int* p = arr;
    cout << "请输入 " << n << " 个整数：";
    for (int i = 0; i < n; ++i) {
        cin >> *p;
        p++;
    }
    p = arr;
    int sum = 0;
    int maxValue = *p;
    int maxPosition = 1;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    for (int position = 1; position <= n; ++position) {
        sum += *p;
        if (*p > maxValue) {
            maxValue = *p;
            maxPosition = position;
        }

        if (*p > 0) {
            ++positiveCount;
        } else if (*p < 0) {
            ++negativeCount;
        } else {
            ++zeroCount;
        }
        p++;
    }
    cout << "数组元素之和：" << sum << '\n';
    cout << "最大值：" << maxValue << '\n';
    cout << "最大值的位置：" << maxPosition << '\n';
    cout << "正数个数：" << positiveCount << '\n';
    cout << "负数个数：" << negativeCount << '\n';
    cout << "零的个数：" << zeroCount << '\n';
    delete[] arr;
    return 0;
}