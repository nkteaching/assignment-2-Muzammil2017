#include<iostream>
using namespace std;

int cubeOfNumber(int number)
{
   static int a;
  if(a>=number)
  {
    return 0;
  }
  else
  {
    a++;
    cout<<a*a*a<<" ";
    return cubeOfNumber(number);
  }
}

int main()
{
  cubeOfNumber(5);
}

