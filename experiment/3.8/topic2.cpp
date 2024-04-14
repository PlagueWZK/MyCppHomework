#include<iostream>
using namespace std;
template <typename T>
T max(T a,T b,T c) {
    return a>(b>c?b:c) ? a : (b>c?b:c);
}

int main() {
    cout<<max(6,7,9)<<endl;
    cout<<max(6.6,7.9,0.9)<<endl;
}