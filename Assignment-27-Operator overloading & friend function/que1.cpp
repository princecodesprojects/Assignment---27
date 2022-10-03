#include<iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x; b=y;
    }
    void showData()
    {
        cout<<"Real= "<<a<<" Imag= "<<b<<endl;
    }
    Complex operator+(Complex C)
    {
      Complex temp;
      temp.a=a+C.a;
      temp.b=b+C.b;
      return temp;
    }

    Complex operator-(Complex C)
    {
      Complex temp;
      temp.a=a-C.a;
      temp.b=b-C.b;
      return temp;
    }

    Complex operator*(Complex C)
    {
      Complex temp;
      temp.a=a*C.a;
      temp.b=b*C.b;
      return temp;
    }

    Complex operator==(Complex C)
    {
      Complex temp;
      temp.a=a==C.a;
      temp.b=b==C.b;
      return temp;
    }
};

int main()
{
    system("cls");
    Complex c1,c2,c3,c4,c5,c6;
    c1.setData(1,4);
    c2.setData(3,4);
    c1.showData();
    c2.showData();
    c3=c1+c2;
    c3.showData();
    c4=c2-c1;
    c4.showData();
    c5=c1*c2;
    c5.showData();
    c6=c1==c2;
    c6.showData();
    return 0;
}