#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "请输入2个正整数: ";
	cin >> a >> b;
	while (b != 0) {
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	cout << "最大公约数: " << a << endl;
	return 0;
}