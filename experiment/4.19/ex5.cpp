#include<iostream>
#include<string>
using namespace std;


class Student {
public:
    Student() {
        num = 0;
        name = "王小明";
    }
    Student(int _num,string _name):num(_num),name(_name){};
    ~Student() {
        cout<<num<<" "<<name<<" "<<"退出程序"<<endl;
    }

private:
    int num;
    string name;
};

int main()
{
    
    Student b(1,"张三");
    Student c(2,"李四");
    Student d(3,"王五");
    Student a;
    return 0;
}
