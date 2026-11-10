#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= i; ++j) {
			int k = j * i;
			cout << j << "*" << i << "=" << k << "\t";
		}
		cout << endl;
	}
	return 0;
}