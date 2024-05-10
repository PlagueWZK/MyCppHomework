//建立一个对象数组，内放5个学生的数据（学号、成绩），用指针指向数组首元素，输出第1，3，5个学生的数据。
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    Student(int number, double grade):number(number),grade(grade) {}
    void print() {
        cout<<number<<" "<<grade<<endl;
    }
private:
    int number;
    double grade;
};


int main() {
    Student students[] = {Student(1001,100),Student(1002,98),Student(1003,89),Student(1004,74),Student(1005,12)};
    Student * p = students;
    int count = 0;
    while (count++ < 3)
    {
        p->print();
        p+=2;
    }
    
    return 0;
}