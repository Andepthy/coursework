#include <iostream>
using namespace std;
int main() {
    char text[1000];
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int others = 0;
    cin.getline(text, 1000);
    for (int i = 0; text[i] != '\0'; ++i) {
        if ((text[i] >= 'a' && text[i] <= 'z') ||
            (text[i] >= 'A' && text[i] <= 'Z')) {
            ++letters;
            if (text[i] >= 'a' && text[i] <= 'z') {
                text[i] = text[i] - 'a' + 'A';
            }
        } else if (text[i] >= '0' && text[i] <= '9') {
            ++digits;
        } else if (text[i] == ' ') {
            ++spaces;
        } else {
            ++others;
        }
    }
    cout << "英文字母个数：" << letters << endl;
    cout << "数字个数：" << digits << endl;
    cout << "空格个数：" << spaces << endl;
    cout << "其他字符个数：" << others << endl;
    cout << "转换后的字符串：" << text << endl;
    return 0;
}