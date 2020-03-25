#include<iostream>
using namespace std;

int Check_Character(int , string , char );

int main()
{
	
	string str;
	char ch;
	
	cout << "Enter any string:";
	cin >> str;
	cout << "Enter character which you want to find:";
	cin >> ch;
	
	Check_Character(0, str, ch);
	
}

int Check_Character(int i, string str, char ch)
{
	static int count = 0;
	if(i == str.size())
	{
		if(i == 0)
		{
			cout << "Character is not found";
			return count;
		}
	}
	else
	{
		if(str[i] == ch)
		{
			count++;
			i++;
		}
		
		else
		{
			i++;
			
		}
		
		return Check_Character(i, str, ch);
	}
	cout << "Total amount of occurence of "<<ch<<"  present in string is :" << count;
}

