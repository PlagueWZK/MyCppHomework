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

    void display(const Date &);
};

class Date

{
private:
    int month;

    int day;

    int year;

public:
    friend Time;
    Date(int, int, int);
};

Time::Time(int h, int m, int s)

{
    hour = h;

    minute = m;

    sec = s;
}

void Time::display(const Date &da)

{
    cout << da.month << "/" << da.day << "/" << da.year;

    cout << endl;

    cout << hour << ":" << minute << ":" << sec << endl;
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

    t1.display(d1);

    return 0;
}

// 将Time类声明为Date类的友元类，通过Time类中的display函数引用Date类对象的私有数据，输出年、月、日和时、分、秒。
