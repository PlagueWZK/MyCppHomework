#include<iostream>
using namespace std;
class String {
public:
    String() {
        p = NULL;
    }
    String(const char*);
    void display();
private:
    const char *p;
};
String::String(const char* s){
    p = s;
}
void String::display() {
    cout<<p;
}

int main() {
    String("ADDS").display();
    cout<<endl;
    char x = 'a';
    char* a = &x;
    cout<<a<<endl; //输出指针所指向的字符并且继续输出知道遇到\0空字符
    cout<<*a<<endl; //输出指针a所指向的内容
    int* y = new int(5);//new关键字返回一个int对象的地址
    cout<<y<<endl;//输出指针y的地址
    cout<<*y<<endl;//输出指针y指向的int数据
}