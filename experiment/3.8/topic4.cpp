#include<iostream>
using namespace std;
int add(int x,int y){
    return(x+y);
}


int main() {
    int a,b;
    int c = add(a,b);
    cout<<"a+b="<<c<<endl;
    return 0;
}
