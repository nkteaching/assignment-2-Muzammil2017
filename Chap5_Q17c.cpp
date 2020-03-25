#include<iostream>
using namespace std;

void Remove_Character(int , string , char );
int main()
{
	string str;
	char ch;
	
	cout << "Enter any string:";
	cin >> str;
	cout << "Enter character which you want to remove from a string:";
	cin >> ch;
	Remove_Character(0, str, ch);
}
void Remove_Character(int a, string str, char ch)
{
	if(a == str.size())
	{
	   for(int k = 0;k < str.size();k++)
	   {
	   	    cout << str[k];
	   }	
	}
	
	else
	{
		if(str[a] == ch)
		{
			str[a] =* ("");
			a++;
		}
		
		else
		{
			a++;	
		}
		
		return Remove_Character(a, str, ch);
	}
}

