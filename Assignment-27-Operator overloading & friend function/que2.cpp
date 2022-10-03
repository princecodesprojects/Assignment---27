#include<iostream>
using namespace std;

class IncDec
{
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }

    void showData()
    {
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }

    IncDec operator++()
    {
        IncDec temp;
        temp.a=a+1;
        temp.b=b+1;
        return temp;
    }

    IncDec operator++(int useless)
    {
        IncDec temp;
        temp.a=a++;
        temp.b=b++;
        return temp;
    }

    IncDec operator--()
    {
        IncDec temp;
        temp.a=a-1;
        temp.b=b-1;
        return temp;
    }

    IncDec operator--(int useless)
    {
        IncDec temp;
        temp.a=a--;
        temp.b=b--;
        return temp;
    }

    IncDec()
    {

    }

    IncDec(int x,int y)
    {
        a=x; b=y;
    }

};

int main()
{
    system("cls");
    IncDec i1(2,3),i2(4,5),i3;
    i1.showData();
    i1++.showData();
    i1.showData();
    (++i1).showData();
    
    i2--.showData();
    i2.showData();
    (--i2).showData();
    
    return 0;
}