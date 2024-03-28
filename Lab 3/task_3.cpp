#include<iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:

    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void advance(int h,int m,int s)
    {
        hour=(h+hour)%24;
        minute=(m+minute)%60;
        second=(s+second)%60;
    }
    void print()
    {
        cout<<hour<<" hours "<<minute<<" minutes"<<second<<" seconds "<<endl;
    }

};



int main()
{
    Time obj1;
    obj1.reset(5,12,48);
    obj1.print();
    obj1.advance(2,30,15);
    obj1.print();

}
