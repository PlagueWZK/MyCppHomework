#include <iostream>

using namespace std;

class Date;

class Time

{
private:
    int hour;

    int minute;

    int sec;

public:
    Time(int, int, int);

    friend void display(const Date &,const Time &);
};

class Date

{
private:
    int month;

    int day;

    int year;

public:
    Date(int, int, int);

    friend void display(const Date &,const Time &);
};

Time::Time(int h, int m, int s)

{
    hour = h;

    minute = m;

    sec = s;
}

void display(const Date &da,const Time &t)

{
    cout << da.month << "/" << da.day << "/" << da.year;

    cout << endl;

    cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}
Date::Date(int m, int d, int y)

{
    month = m;

    day = d;

    year = y;
}

int main()

{
    Time t1(10, 13, 56);

    Date d1(12, 25, 2004);

    display(d1,t1);

    return 0;
}

// 将display函数不放在Time类中，而作为类外的普通函数，然后分别在Time和Date类中将display声明为友元函数。
// 在主函数中调用display函数，display函数分别引用Time和Date两个类的对象的私有数据，输出年、月、日和时、分、秒。