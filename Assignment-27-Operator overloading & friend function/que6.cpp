#include<iostream>
using namespace std;
#include<string.h>
class Cstring
{
  private:
  char str1[25];
  
  public:
  void setString()
  {
    cout<<"Enter String"<<endl;
    cin>>str1;
    
  }
  Cstring operator+(Cstring S)
  {
     Cstring temp;
     strcpy(temp.str1,str1);
     strcat(temp.str1,S.str1);
     return temp;
  }
  void showData()
  {
    cout<<str1<<endl;;
  }

  int operator==(Cstring &t);
};

int Cstring::operator==(Cstring &t)
{
  for(int i=0;str1[i]!='\0';i++)
  {
    for(int j=0;str1[j]!='\0';j++)
    {
      if(str1[i]==t.str1[j])
      {
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }
}

int main()
{
    system("cls");
    Cstring s1,s2,s3;
    s1.setString();
    s2.setString();
    s3=s1+s2;
    s3.showData();

    int result=s1==s2;
    if(result==0)
    {
      cout<<"\n\n Both strings are equal";
    }
    else
    {
      cout<<"\n\n Both strings are not equal";
    }
    return 0;
}

