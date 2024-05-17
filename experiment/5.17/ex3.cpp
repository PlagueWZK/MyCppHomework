#include <iostream>
using namespace std;
class Student
// 定义student类
{
public:
    // 定义构造函数
    Student(int n, int a, float s) : num(n), age(a), score(s) {} // 声明成员函数void total();
    // 声明静态成员函数
    void total();
    static float average();

private:
    int num;
    int age;
    float score;
    static float sum;
    static int count;
    // 静态数据成员sum(总分)
    // 静态数据成员count(计数)
};
void Student::total()
{
    sum += score;
    count++;
    // 定义非静态成员函数
    // 累加总分
    // 累计已统计的人数
}
float Student::average()
// 定义静态成员函数
{
    return (sum / count);
}
float Student::sum = 0;
int Student::count = 0;
int main()
{
    Student stud[3] = {
        Student(1001, 18, 70),
        Student(1002, 19, 78),
        Student(1005, 20, 98)};
    int n;
    cout<<"please input the number of students : ";
    cin>>n;
    for (int i = 0; i < n; i++)
        // 输入需要求前面多少名学生的平均成绩//调用3次 total 函数
        stud[i].total();
    cout << "the average score of " << n << " students is " << Student::average() << endl;
    // 调用静态成员函数
    return 0;
}