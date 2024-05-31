#include<iostream>
#include<string>
using namespace std;
class Student
{
protected:
    int num;
    string name;
    char sex;
public:
    void display()

    {
        cout << "num: " << num << endl;
        cout << "name: " << name << endl;
        cout << "sex: " << sex << endl;
    }
    void input() {
        cin>>num>>name>>sex;
    }
};

class Student1:public Student

{
private:
    int age;
    char addr[20];
public:
    void input_() {
        input();
        cin>>age>>addr;
    }
    void display_()
    {
        display();
        cout << "age:" << age << endl;
        cout << "address:" << addr << endl;
    }
};
int main() {
    Student1 a;
    a.input_();
    a.display_();
}