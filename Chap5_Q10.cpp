#include<iostream>
using namespace std;
float Series(int , float );
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	float Sum;
	Sum =	Series(n,1.0);
	cout<<Sum;
}
float Series(int n, float sum)
{
	static int totalsize = 1;
	static double i = 2;												
	
	if (totalsize!= n)
	{
		if(totalsize%2 != 0)													
		{
			totalsize++;
			return Series(n, sum+ (1/i++) );
		}
		else															
		{
			totalsize++;
			return Series(n, sum- (1/i++) );
		}
		
	}
	else
	{
		return sum;
	}
	
}
