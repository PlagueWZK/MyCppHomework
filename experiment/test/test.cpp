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
    cout<<a<<endl;
    cout<<*a;
}