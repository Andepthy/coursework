#include <iostream>
using namespace std;
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int maxArray(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int findArray(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main() {
    int arr[100];
    int size;
    cout << "请输入数组长度（1 到 100）：";
    cin >> size;
    if (size < 1 || size > 100) {
        cout << "数组长度无效。\n";
        return 1;
    }
    cout << "请输入 " << size << " 个整数：";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "元素和：" << sumArray(arr, size) << endl;
    cout << "最大值：" << maxArray(arr, size) << endl;
    int target;
    cout << "请输入要查找的元素：";
    cin >> target;
    int index = findArray(arr, size, target);
    if (index == -1) {
        cout << "查找结果：未找到。\n";
    } else {
        cout << "查找结果：下标为 " << index << "。\n";
    }
    reverseArray(arr, size);
    cout << "逆序后的数组：";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}