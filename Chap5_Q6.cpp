#include<iostream>
using namespace std;

void putCommas(unsigned long no)
{
	const unsigned int t=1000;
	
	if(no<t)
	{
		cout<<no;
	}
	
	else
	{
		int store;
		store=no%t;
		putCommas(no/t);
		cout<<","<<store;
	}
}

int main()
{
	int no;
	cout << "Enter number: ";
	cin >> no;
	 
	putCommas(no);
}
