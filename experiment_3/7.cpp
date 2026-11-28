#include <iostream>
#include <string>
using namespace std;
struct Student {
    string id;
    string name;
    double score;
};
int main() {
    Student students[50];
    int n;
    cout << "请输入学生人数（1 到 50）：";
    if (!(cin >> n) || n < 1 || n > 50) {
        cout << "人数无效。\n";
        return 1;
    }
    for (int i = 0; i < n; i++) {
        cout << "\n请输入第 " << i + 1 << " 个学生的信息：\n";
        cout << "学号：";
        cin >> students[i].id;
        cout << "姓名：";
        cin >> students[i].name;
        cout << "成绩：";
        cin >> students[i].score;
    }
    cout << "\n所有学生信息：\n";
    for (int i = 0; i < n; i++) {
        cout << "学号：" << students[i].id
             << "，姓名：" << students[i].name
             << "，成绩：" << students[i].score << endl;
    }
    double sum = 0;
    int maxIndex = 0;
    int minIndex = 0;
    int failCount = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].score;
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
        if (students[i].score < students[minIndex].score) {
            minIndex = i;
        }
        if (students[i].score < 60) {
            failCount++;
        }
    }
    cout << "全班平均分：" << sum / n << endl;
    cout << "最高分学生：学号：" << students[maxIndex].id
         << "，姓名：" << students[maxIndex].name
         << "，成绩：" << students[maxIndex].score << endl;
    cout << "最低分学生：学号：" << students[minIndex].id
         << "，姓名：" << students[minIndex].name
         << "，成绩：" << students[minIndex].score << endl;
    cout << "不及格人数：" << failCount << endl;
    return 0;
}