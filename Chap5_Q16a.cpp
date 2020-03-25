#include <iostream>
using namespace std;

void Palindrome(char string[], int prev_index, int halfSize, int next_index, bool check)
{	
	if(halfSize!=0 && check)
	{
		if(string[prev_index] == string[next_index])
		{
			Palindrome(string, --prev_index, --halfSize, ++next_index, true);
		}
		
		else
		{
			Palindrome(string, --prev_index, --halfSize, ++next_index, false);
		}
	}
	
	else
	{
		if(check)
		{
			cout << "Yes it's palindrome";
		}
		
		else
		{
			cout << "No it's not a palindrome";
		}
	}
}



int main()
{
	int length;
	cout << "Enter the lenght of string: ";
	cin >> length;
	
	char string[length];
	
	cout << "Enter any string to check it's palindrome or not: ";
	
	for(int i=0;i<length;i++)
	{
		cin >> string[i];
	}
	
	Palindrome(string, length-1, length/2, 0, true);
}
