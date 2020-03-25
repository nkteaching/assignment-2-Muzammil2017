#include<iostream>
using namespace std;

void PrintOdd(int n)
{
	if(n%2!=0)
	{
		cout << n << " ";
	}
	if(n>2)
	{
		PrintOdd(n-1);
	}

}

int main()
{
	
	PrintOdd(6);
}
