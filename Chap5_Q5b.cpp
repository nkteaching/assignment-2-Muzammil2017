#include<iostream>
using namespace std;

void PrintOdd(int n)
{
	if(n>1)
	{
		PrintOdd(n-1);
	}
	if(n%2!=0)
	{
		cout << n << " ";
	}
}

int main()
{
	
	PrintOdd(6);
}
