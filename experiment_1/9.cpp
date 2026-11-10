#include <iostream>
using namespace std;
int main() {
	const int number = 66;
	for (int attempt = 1; attempt <= 10; ++attempt) {
		int guess;
		cout << "请猜测1~100之间的整数：";
		cin >> guess;
		if (guess == number) {
			cout << "恭喜猜中！猜了" << attempt << "次" << endl;
			return 0;
		}
		if (guess > number) {
			cout << "猜大了" << endl;
		} else {
			cout << "猜小了" << endl;
		}
	}
	cout << "超过10次了，正确答案是：" << number << endl;
	return 0;
}