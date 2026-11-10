#include <iostream>
using namespace std;
int main() {
	char chara;
	int letters = 0;
	int numbers = 0;
	int others = 0;
	while (cin.get(chara) && chara != '\n') {
		if ((chara >= 'A' && chara <= 'Z') || (chara >= 'a' && chara <= 'z')) {
			++letters;
		} else if (chara >= '0' && chara <= '9') {
			++numbers;
		} else {
			++others;
		}
	}
	cout << "英文字母个数：" << letters << endl;
	cout << "数字个数：" << numbers << endl;
	cout << "其他字符个数：" << others << endl;
	return 0;
}