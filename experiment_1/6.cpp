#include <iostream>
using namespace std;
int main() {
	int number;
    cout << "请输入大于1的整数: ";
	cin >> number;
	bool yes = true;
	for (int i = 2; i <= number / i; ++i) {
		if (number % i == 0) {
			yes = false;
			break;
		}
	}
	if (yes) {
		cout << "是素数" << endl;
	} else {
		cout << "不是素数" << endl;
	}
	return 0;
}