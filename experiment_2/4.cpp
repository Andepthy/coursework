#include <iostream>
using namespace std;

int main() {
    int m, n;
    if (!(cin >> m >> n) || m < 1 || m > 100 || n < 1 || n > 100) {
        cout << "m 和 n 必须在 1 到 100 之间" << endl;
        return 1;
    }

    int matrix[100][100];
    int transposed[100][100];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(cin >> matrix[i][j])) {
                cout << "输入无效" << endl;
                return 1;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j > 0) {
                cout << " ";
            }
            cout << transposed[i][j];
        }
        cout << endl;
    }

    return 0;
}