#include <iostream> 
using namespace std; 
  
int Multiply(int a, int b) 
{ 
   if(a == 1)
   {
   		return b;
   }
   
   else
   {
   		return b + Multiply(a-1, b);
   }
} 

int main() 
{ 
    int a, b; 
    
    cout << "Enter two numbers you want to multiply : ";
    cin >> a>> b;
    
    cout << Multiply(a, b);
}
