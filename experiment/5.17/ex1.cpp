// 阅读程序，在下列程序中增加一个fun函数，改写main函数,
// 改为在fun函数中调用change和display函数。在fun函数中使用对象的引用(Student &)作为形参。

#include <iostream>

using namespace std;

class Student

{
public:
    Student(int n, float s) : num(n), score(s) {}

    void change(int n, float s)
    {
        num = n;
        score = s;
    }

    void display() { cout << num << " " << score << endl; }
    static void fun(Student& s)
    {
        s.display();

        s.change(101, 80.5);

        s.display();
    }

private:
    int num;

    float score;
};

int main()

{
    Student stud(101, 78.5);
    Student::fun(stud);
    return 0;
}
