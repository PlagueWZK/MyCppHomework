//建立一个对象数组，
//内放5个学生的数据（学号、成绩），设立一个函数max，用指向对象的指针作函数参数，在max函数中找出5个学生中成绩最高者，并输出其学号。

#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    Student(int number, double grade):number(number),grade(grade) {}
    static void max(Student * p) {
        Student * max = p;
        for(int i = 0;i < 4;i++) {
            if((++p)->grade > max->grade)
            max = p;
        }
        cout<<max->number;
    }
private:
    int number;
    double grade;
};


int main() {
    Student students[] = {Student(1001,100),Student(1002,98),Student(1003,89),Student(1004,74),Student(1005,12)};
    Student * p = students;
    Student::max(p);
    return 0;
}