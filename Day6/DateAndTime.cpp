// Q-5. Write Date and Time classes that allow you to add, subtract,
//read and print simple dates in dd/mm/yyyy and time in hh:mm:ss formats.
//Use function overloading in your program.


#include<iostream>
using namespace std;

class Date
{
protected:
    int day, month, year;

public:

    Date()
    {
        cout<<"\n Dafault Constructor date";
    }
    Date(int d, int m, int y)
    {
     cout<<"\n Para Constructor date";
        day = d;
        month = m;
        year = y;
    }

    ~Date()
    {
        cout<<"\n Date Destructor ";
    }

    void readdate()
    {
        cout<<"\n Enter your date";
        cout<<"\n Day : ";
        cin>>day;
        cout<<"\n Month : ";
        cin>>month;
        cout<<"\n Year : ";
        cin>>year;
    }

    void printdate()
    {
        cout<<"\n Date";
        cout<<day<<"/"<<month<<"/"<<year;
    }

    Date operator +(Date d)
    {
        Date temp1;
        temp1.day = day + d.day;
        temp1.month = month + d.month;
        temp1.year = year + d.year;

        return temp1;
    }
};

class Time
{
protected:
    int hour, minutes, seconds;

public:

    Time()
    {
        cout<<"\n default Constructor time";
    }
    Time(int hh, int mm, int ss)
    {
    cout<<"\n para Constructor time";
        hour = hh;
        minutes = mm;
        seconds = ss;
    }
    ~Time()
    {
        cout<<"\n Time Destructor";
    }

    void readtime()
    {
        cout<<"\n Enter a Time";
        cout<<"\nHour : ";
        cin>>hour;
        cout<<"\minutes : ";
        cin>>minutes;
        cout<<"\seconds : ";
        cin>>seconds;
    }

    void printtime()
    {
        cout<<"\n Time ";
        cout<<hour<<":"<<minutes<<":"<<seconds;
    }

    Time operator +(Time t)
    {
        Time temp;
        temp.hour = hour + t.hour;
        temp.minutes = minutes + t.minutes;
        temp.seconds = seconds + t.seconds;

        return temp;
    }
};

int main()
{
    Date d1, d2, d3;
    d1.readdate();
    d2.readdate();

    d3 = d1 + d2;
    cout<<"\Date";
    d3.printdate();

    Time t1, t2, t3;
    t1.readtime();
    t2.readtime();
    t3 = t1 + t2;
    t3.printtime();




}
