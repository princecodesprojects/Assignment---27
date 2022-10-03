#include<iostream>
using namespace std;

class Matrix
{
  int a[3][3];
  public:
  void setMatrix()
  {
    cout<<"Enter Matrix Elements (3 X3) :"<<endl;
    int i,j;
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
     }
  } 
  void showMatrix()
   {
      int i,j;
      cout<<endl<<"Matrix is :"<<endl;
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t"<<"  ";
         }
         cout<<endl;
      }
   }

   Matrix operator+(Matrix m)
   {
    Matrix temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp.a[i][j]=a[i][j]+m.a[i][j];
        }
    }
    return temp;
   }

};

int main()
{
    system("cls");
    Matrix m1,m2,m3;
    m1.setMatrix();
    m2.setMatrix();
    m3=m1+m2;
    m3.showMatrix();
    return 0;
}