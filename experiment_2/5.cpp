#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    const int max_size = 100;
    if (rows <= 0 || cols <= 0 || rows > max_size || cols > max_size) {
        cout << "行数列数必须在 1 到 " << max_size << " 之间\n";
        return 0;
    }

    int numbers[max_size][max_size];
    for (int row_index = 0; row_index < rows; ++row_index) {
        for (int col_index = 0; col_index < cols; ++col_index) {
            cin >> numbers[row_index][col_index];
        }
    }

    for (int row_index = 0; row_index < rows; ++row_index) {
        int max = numbers[row_index][0];
        int max_col = 0;
        for (int col_index = 1; col_index < cols; ++col_index) {
            if (numbers[row_index][col_index] > max) {
                max = numbers[row_index][col_index];
                max_col = col_index;
            }
        }
        cout << "第 " << row_index + 1 << " 行最大值为 " << max
             << "，位于第 " << max_col + 1 << " 列\n";
    }

    for (int col_index = 0; col_index < cols; ++col_index) {
        int max = numbers[0][col_index];
        int max_row = 0;
        for (int row_index = 1; row_index < rows; ++row_index) {
            if (numbers[row_index][col_index] > max) {
                max = numbers[row_index][col_index];
                max_row = row_index;
            }
        }
        cout << "第 " << col_index + 1 << " 列最大值为 " << max
             << "，位于第 " << max_row + 1 << " 行\n";
    }

    return 0;
}