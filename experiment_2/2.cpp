#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "n 必须在 1 到 100 之间" << endl;
        return 1;
    }

    int array[100];
    for (int i = 0; i < n; ++i) {
        if (!(cin >> array[i])) {
            cout << "输入无效" << endl;
            return 1;
        }
    }

    for (int i = 0; i < n / 2; ++i) {
        swap(array[i], array[n - i - 1]);
    }

    cout << "首尾交换法: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; ++i) {
        swap(array[i], array[n - i - 1]);
    }

    int reversed_array[100];
    for (int i = 0; i < n; ++i) {
        reversed_array[i] = array[n - i - 1];
    }

    cout << "辅助数组法: ";
    for (int i = 0; i < n; ++i) {
        cout << reversed_array[i] << " ";
    }
    cout << endl;

    return 0;
}