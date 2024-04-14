#include<iostream>
using namespace std;

int max(int a,int b) {
    return a>b?a:b;
}
int max(int a,int b,int c) {
    int temp = a>b?a:b;
    return a>temp?a:temp;
}
int main() {
    cout<<max(5,9)<<endl;
    cout<<max(9,6,3)<<endl;
}