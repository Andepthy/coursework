#include <iostream>
using namespace std;
int main() {
    int n;
    if (!(cin >> n) || n < 0 || n > 100) {
        cout << "n 必须在 0 到 100 之间" << endl;
        return 1;
    }
    int array[100];
    for (int i = 0; i < n; ++i) {
        if (!(cin >> array[i])) {
            cout << "输入无效" << endl;
            return 1;
        }
    }
    int bubble_sort[100];
    int select_sort[100];
    for (int i = 0; i < n; ++i) {
        bubble_sort[i] = array[i];
        select_sort[i] = array[i];
    }
    cout << "冒泡排序:" << endl;
    if (n <= 1) {
        cout << "无需排序，结果: ";
        for (int i = 0; i < n; ++i) {
            cout << bubble_sort[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - 1 - i; ++j) {
                if (bubble_sort[j] > bubble_sort[j + 1]) {
                    swap(bubble_sort[j], bubble_sort[j + 1]);
                }
            }
            cout << "第 " << i + 1 << " 回: ";
            for (int j = 0; j < n; ++j) {
                cout << bubble_sort[j] << " ";
            }
            cout << endl;
        }
    }
    cout << "选择排序:" << endl;
    if (n <= 1) {
        cout << "无需排序，结果: ";
        for (int i = 0; i < n; ++i) {
            cout << select_sort[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = 0; i < n - 1; ++i) {
            int min_index = i;
            for (int j = i + 1; j < n; ++j) {
                if (select_sort[j] < select_sort[min_index]) {
                    min_index = j;
                }
            }
            swap(select_sort[i], select_sort[min_index]);
            cout << "第 " << i + 1 << " 回: ";
            for (int j = 0; j < n; ++j) {
                cout << select_sort[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}