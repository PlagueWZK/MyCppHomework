#include<iostream>
using namespace std;
class Complex {
public:
    Complex(int r,int i):real(r),imaginary(i){}
    Complex operator+ (Complex& c) {
        return Complex(real+c.real,imaginary+c.imaginary);
    }
    Complex operator+ (int i) {
        return Complex(real+i,imaginary);
    }
    friend Complex operator+ (int,Complex&);
    void display() {
        cout<<"("<<real;
        if (imaginary > 0)
        {
            cout<<"+";
        }
        cout<<imaginary<<"i)";
    }
private:
    int real;
    int imaginary;
};

Complex operator+ (int i,Complex& c) {
    cout<<"friend!"<<endl;
    return Complex(c.real+i,c.imaginary);
}
int main() {
    Complex c1(1, 5);  
    Complex c2(2, 3);  
    Complex c3 = c1 + c2; 
    Complex c4 = 10 + c1; 
    Complex c5 = c1 + 10; 
  
    c3.display(); 
    c4.display();  
    c5.display();  
  
    return 0; 

}



/*
定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。参加运算的两个运算量可以都是类对象，也可以其中有一个是整数，顺序任意。例如： c1+c2,i+c1,c1+i均合法(设i为整数,c1,c2为复数)。编程序，分别求两个复数之和、整数和复数之和。
*/