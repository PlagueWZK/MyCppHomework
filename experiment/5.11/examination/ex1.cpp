#include <iostream>

using namespace std;

class Time

 {public:

   Time(int,int,int);

   void fun(  int &t )

   {

      hour=t;

      t= 18;

   }

   int hour;

   int minute;

   int sec;

 }; 

Time::Time(int h,int m,int s)

 {   hour=h;

     minute=m;

     sec=s;

 }

int main()

{int x=15;

Time t1(10,13,56);

t1.fun(x);

cout<<t1.hour<<" ";

cout<<x<<endl;

return 0;

}