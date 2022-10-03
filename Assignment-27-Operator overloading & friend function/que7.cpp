#include<iostream>
using namespace std;

class Fraction
{
    long numerator;
    long denominator;
    public:
    Fraction()
    {
       numerator=0;
       denominator=0;
    }
    Fraction(int n,int d)
    {
        numerator=n;
        denominator=d;
    }

    friend void operator>>(istream &is, Fraction &f)
    {
        cout<<"\n Numerator  :  ";
        is>>f.numerator;
        cout<<"\n Denominator  :  ";
        is>>f.denominator;
    }

    friend void operator<<(ostream &os,Fraction &f)
    {
        os<<f.numerator<<"/"<<f.denominator;
    }
    
    void showData()
    {
       cout<<numerator<<"/"<<denominator<<endl;
    } 
    Fraction operator++()
    {
        cout<<"Pre-Increment operator called"<<endl;
        
        ++numerator;
        ++denominator;
        return *this;
    }
 
    Fraction operator++(int useless)
    {
        cout<<"Post-Increment operator called"<<endl;
        Fraction temp=*this;
        numerator++;
        denominator++;
        return temp;
    }
    
};



int main()
{
    system("cls");
    Fraction f1,f2;
   cout<<"\n f1   :  ";
   cout<<f1;
   cout<<"\n f2   :  ";
   cout<<f2;
   cout<<"\n\n Enter 1st fraction value \n ";
   cin>>f1;
   cout<<"\n f1++  ";
   f1++;
   cout<<f1;
   cout<<"Enter 2nd Fraction Value \n";
   cin>>f2;
   f2=++f1;
   cout<<"\n f2= ++f1";
   cout<<"\n f1   :  ";
   cout<<f1;
   cout<<"\n f2   :  ";
   cout<<f2;
   f2=f1++;
   cout<<"\n\n f2=f1++";
   cout<<"\n f1   :  ";
   cout<<f1;
   cout<<"\n f2   :  ";
   cout<<f2;
   return 0;
}