#include<iostream>
using namespace std;

class Numbers
{
  int x,y,z;
  public:
   void setData(int a,int b,int c)
   {
     x=a; y=b; z=c;
   }
   void showData()
    {
        cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
    }

    Numbers operator-()
    {
        Numbers num;
        num.x=-x;
        num.y=-y;
        num.z=-z;
        return num;
    }
};

int main()
{
    Numbers n1,n2;
    n1.setData(2,3,4);
     n1=-n1;
     n1.showData();
     return 0;
}