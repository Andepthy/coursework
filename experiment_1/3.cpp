#include <iostream>
using namespace std;
int main() {
	float a, b;
	char operation;
	cout << "请输入算式：";
	cin >> a >> operation >> b;
	switch (operation) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b == 0) {
			cout << "除数不能为0" << endl;
		} else {
			cout << a / b << endl;
		}
		break;
	}
	return 0;
}