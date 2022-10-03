#include<iostream>
using namespace std;
#include<cstring>

class Mystring
{
  char str[100];
  const int size=100;
  public:
  void display()
  {
    cout<<str<<endl;
  }

  void accept_string()
  {
    cout<<"\n Enter String  : ";
    cin>>str;
  }

  void operator!();

};

void Mystring::operator!()
{
  for(int i=0;str[i]!='\0';i++)
     {
        if(str[i]>='a' && str[i]<='z')
        {
           str[i]=str[i]-32;
        }
        else if(str[i]>='A' &&str[i]<='Z')
        {
            str[i]=str[i]+32;
        } 
     }
     cout<<"\n\n Reverse case String is : "<<str;
}

int main()
{
    system("cls");
    Mystring s1;
    s1.accept_string();
    cout<<"\n\n String is  :  ";
    s1.display();
    !s1;
    return 0;
}