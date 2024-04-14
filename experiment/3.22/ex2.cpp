#include<bits/stdc++.h>
using namespace std;

void stradd(string *original, string *other) {
    *original = *original + *other;
}
int main() {
    string s1,s2;
    cin>>s1>>s2;
    stradd(&s1,&s2);
    cout<<s1;
    return 0;
}