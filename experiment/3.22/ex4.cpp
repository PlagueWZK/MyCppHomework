#include<bits/stdc++.h>
using namespace std;
class String
{
    public:
    string str;
    void putIn() 
    {
        cin>>str;
    }
    int getLength() 
    {
        return str.length();
    }
    void putOut() 
    {
        cout<<str<<endl;
    }
    void Sort() 
    {
        sort(str.begin(),str.end());
    }
    
};
int main() 
    {
        String op;
        op.str;
        op.putIn();
        cout<<op.getLength()<<endl;
        op.putOut();
        op.Sort();
        op.putOut();
        return 0;
    }
