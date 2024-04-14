#include<iostream>
using namespace std;
void swap(int*,int*);
int main() {
    
    int a,b;
    cin>>a>>b;
    if (a<b)swap(&a,&b);
    cout<<a<<b;
    return 0;
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}