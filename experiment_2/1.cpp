#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "n 必须在 1 到 100 之间" << endl;
        return 1;
    }

    int numbers[100];
    for (int i = 0; i < n; ++i) {
        if (!(cin >> numbers[i])) {
            cout << "输入无效" << endl;
            return 1;
        }
    }

    int max_value = numbers[0];
    int min_value = numbers[0];
    int max_index = 0;
    int min_index = 0;
    long long sum = numbers[0];

    for (int i = 1; i < n; ++i) {
        sum += numbers[i];
        if (numbers[i] > max_value) {
            max_value = numbers[i];
            max_index  = i;
        }
        if (numbers[i] < min_value) {
            min_value = numbers[i];
            min_index = i;
        }
    }

    cout << "最大值: " << max_value << ", 下标: " << max_index << endl;
    cout << "最小值: " << min_value << ", 下标: " << min_index << endl;
    cout << "平均值: " << static_cast<double>(sum) / n << endl;

    return 0;
}