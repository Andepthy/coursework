#include <iostream>
#include <string>
using namespace std;
struct Student {
    string id;
    string name;
    string gender;
    int age;
    double score;
};
int main() {
    Student init = {"2620040000", "李华", "男", 18, 100.0};
    cout << "初始化学生信息：\n";
    cout << "学号：" << init.id << endl;
    cout << "姓名：" << init.name << endl;
    cout << "性别：" << init.gender << endl;
    cout << "年龄：" << init.age << endl;
    cout << "成绩：" << init.score << endl;
    Student inputStudent;
    cout << "\n请输入学生信息：\n";
    cout << "学号：";
    cin >> inputStudent.id;
    cout << "姓名：";
    cin >> inputStudent.name;
    cout << "性别：";
    cin >> inputStudent.gender;
    cout << "年龄：";
    cin >> inputStudent.age;
    cout << "成绩：";
    cin >> inputStudent.score;
    cout << "\n学生信息：\n";
    cout << "学号：" << inputStudent.id << endl;
    cout << "姓名：" << inputStudent.name << endl;
    cout << "性别：" << inputStudent.gender << endl;
    cout << "年龄：" << inputStudent.age << endl;
    cout << "成绩：" << inputStudent.score << endl;
    return 0;
}