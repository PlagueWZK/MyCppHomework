#include<iostream>
#include<cmath>
using namespace std;
class Triangle {
public:
    void in() {
        cin>>a>>b>>c;
        s = (a+b+c)/2;
    }
    void js() {
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    void print() {
        cout<<area<<endl;
    }
    Triangle(){};
    Triangle(int _a):a(_a){};
    Triangle(int _a,int _b):a(_a),b(_b){};
    Triangle(int _a,int _b,int _c):a(_a),b(_b),c(_c){
        s = (a+b+c)/2;
    };
    ~Triangle() {
        cout<<"析构:"<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
    }
private:
    double a,b,c,s,area;
};

int main() {
    Triangle a(3,4,5);
    a.js();
    a.print();
    return 0;
}