#include <iostream>
using namespace std;
int main() {
	int option;
	do {
		cout << "1. 求两个整数的和\n"
			 << "2. 求两个整数的最大值\n"
			 << "3. 判断一个整数是否为偶数\n"
			 << "4. 退出\n"
			 << "请输入你的选择：";
		if (!(cin >> option)) {
			cout << "输入无效\n";
			option = 0;
			continue;
		}
		switch (option) {
		case 1: {
			int a, b;
			cout << "请输入两个整数：";
			cin >> a >> b;
			cout << "和：" << a + b << endl;
			break;
		}
		case 2: {
			int a, b;
			cout << "请输入两个整数：";
			cin >> a >> b;
			cout << "最大值：" << (a > b ? a : b) << endl;
			break;
		}
		case 3: {
			int number;
			cout << "请输入一个整数：";
			cin >> number;
			if (number % 2 == 0) {
				cout << number << "是偶数" << endl;
			} else {
				cout << number << "是奇数" << endl;
			}
			break;
		}
		case 4:
			cout << "程序退出" << endl;
			break;
		default:
			cout << "输入非法，请重新输入" << endl;
			break;
		}
	} while (option != 4);
	return 0;
}