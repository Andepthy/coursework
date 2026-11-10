#include <iostream>
using namespace std;
int main() {
    int number;
    int sum {0};
    cout << "请输入正整数：";
    cin >> number;
    if (number <= 0) {
        cout << "不是正整数" << endl;
        return 1;
    }
    for (int i = 1; i <= number; i += 2) {
        sum += i;
    }
    cout << "1到" << number << "之间所有奇数的和为：" << sum << endl;
    return 0;
}
