#include<iostream>
using namespace std;
class Test {
public:
    Test(int a ,int b){
        result = a - b;
    }
    void print() {
        cout<<result<<endl;
    }
    ~Test() {

        cout<<"调用析构函数!"<<endl;
    }

private:
    int result;
};


int main()

{

    Test t(88,32);

    t.print();

   return 0;

}