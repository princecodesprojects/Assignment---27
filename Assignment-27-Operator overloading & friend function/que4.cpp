#include<iostream>
using namespace std;

class Time
{
    int hours,minutes,seconds;
    public:
    Time()
    {
      //cout<<"Default called"<<endl;
      
    }
    Time(int x,int y,int z)
    {
        //cout<<"parameterized called"<<endl;
        hours=x; minutes=y; seconds=z;
    }
    void display()
    {
        cout<<"Display called"<<endl;
        cout<<"Hours: "<<hours<<" Minutes: "<<minutes<<" second: "<<seconds<<endl;
    }

    bool operator==(Time t)
    {
        cout<<"Equal operator called"<<endl;
        if(hours==t.hours && minutes==t.minutes && seconds==t.seconds)
        return true;
        else
        return false;  
    }

    friend void operator<<(ostream &os,Time &t)
    {

        os<<"\n Hours  :  "<<t.hours;
        os<<"\n Minutes  :  "<<t.minutes;
        os<<"\n Second  :  "<<t.seconds;
    }

    friend int operator>>(istream &is,Time &t)
    {
        cout<<"Enter Hours  :  ";
        is>>t.hours;
        cout<<"Enter Minutes  :  ";
        is>>t.minutes;
        cout<<"Enter Second  :  ";
        is>>t.seconds;
        t.minutes=t.minutes+t.seconds/60;
        t.seconds =t.seconds % 60;
        t.hours=t.hours+t.minutes/60;
        t.minutes=t.minutes%60;
        // if(t.hours>=25)
        // return 1;
        // else
        // return 0;

    }

    Time operator=(Time t)
    {
        cout<<"Assigment operator called"<<endl;
        Time temp;
        temp.hours=t.hours;  temp.minutes=t.minutes;  temp.seconds=t.seconds;
        return temp;
    }

};


int main()
{
    system("cls");
    Time t1,t2,t3;
    cout<<"Enter First Time \n";
    cout<<"------------------------\n";
    cin>>t1;
    cout<<"\n First Time";
    cout<<t1;
    cout<<"\nEnter Second Time \n";
    cout<<"------------------------\n";
    cin>>t2;
    cout<<"\n Second Time";
    cout<<t2;
    if(t1==t2)
    {
        cout<<"\n Times are same";
    }
    else
    cout<<"\n Times are not same";
    return 0;
} 