/*处理一个复数与一个double数相加的运算，结果存放在一个double型的变量d1中，输出d1的值，再以复数形式输出此值。定义Complex(复数)类，在成员函数中包含重载类型转换运算符： operator double( ){return real;}*/

#include<iostream>
using namespace std;
class Complex {
public:
    Complex(int a,int b):real(a),imaginary(b){};
    operator double() {
        return real;
    }
    void display() {
        cout<<"("<<real;
        if(imaginary > 0) cout<<"+";
        cout<<imaginary<<"i)";
    }
    void show() {
        cout<<d1;
    }
    void add(double d) {
        d1 = real = real + d;
    }
private:
    double d1;
    int real;
    int imaginary;
};

int main() {
    Complex a = Complex(5,4);
    a.display();
    a.add(4);
    a.show();
    a.display();
}