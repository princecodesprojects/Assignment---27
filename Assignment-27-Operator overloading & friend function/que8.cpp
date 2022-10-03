#include<iostream>
using namespace std;

class Matrix
{
   int a[3][3];
   public:
   void setMatrix()
   {
    int i,j;
      cout<<"Enter Matrix Elements (3 x 3) :";
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
            cout<<a[i][j]<<"  ";
         }
         cout<<endl;
      }
   }
   Matrix operator-()
   {
      Matrix temp;
      int i,j;
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            temp.a[i][j]=-a[i][j];
         }
      }
      return temp;
   }
};

int main()
{
    system("cls");
    Matrix m,m1;
    m.setMatrix();
    m.showMatrix();
    m1=-m;
    m1.showMatrix();
    return 0;
}