#include<iostream>
using namespace std;

int main()
{
   int num1,num2,num3;
   cout<<"Enter three integer number : ";
   cin>>num1>>num2>>num3;

  if((num1>=num2) && (num1>=num3))
  {
      cout<<num1<< " is the largest number"<<endl;
  }
 else if((num2>=num1) && (num2>=num3))
  {
      cout<<num2<< " is the largest number"<<endl;
  }
  else
  {
      cout<<num3<< " is the largest number"<<endl;
  }
    return 0;
}


