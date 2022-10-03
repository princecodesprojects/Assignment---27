#include<iostream>
using namespace std;

class Complex
{
  int a,b;
  public:
  
  void showData()
  {
    cout<<"a= "<<a<<" b= "<<b<<endl;
  }
  Complex()
  {

  }
  Complex(int x,int y)
  {
    a=x; b=y;
  }

  friend Complex operator+(Complex,Complex);
  
};


Complex operator+(Complex X,Complex Y)
{
   Complex temp;
   temp.a=Y.a+X.a;
   temp.b=Y.b+X.b;
   return temp;
}

int main()
{
    Complex c1(2,3);
    Complex c2(5,6),c3;
    c3=c1+c2;
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}