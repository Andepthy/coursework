#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "请输入整数：";
	cin >> number;
	if (number > 0)
		cout << "正数";
	else if (number < 0)
		cout << "负数";
	else
		cout << "零";
	if (number != 0) {
		if (number % 2 == 0)
			cout << "，偶数";
		else
			cout << "，奇数";
	}
	cout << endl;
	return 0;
}