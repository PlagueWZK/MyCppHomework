#include<iostream>
using namespace std;
int main() {
    void swap(int &,int &);
    void sort(int &,int &,int &);
    int a,b,c;
    cin>>a>>b>>c;
    sort(a,b,c);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}

void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int &a,int &b,int &c) {
    if(a>b)swap(a,b);
    if(a>c)swap(a,c);
    if(b>c)swap(b,c);
}