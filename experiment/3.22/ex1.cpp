#include<bits/stdc++.h>
using namespace std;
int main() {
    string str[5];
    for(int i = 0;i < 5;i++) {
        cin>>str[i];
    }
    sort(str,str+5);
    for(int i = 0;i < 5;i++) {
        cout<<str[i]<<endl;
    }
}