#include<iostream>
using namespace std;

void Check_Character(int , string , char );

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
void Check_Character(int i, string str, char ch)
{
	if(i==str.size())
	{
		cout << "Character is not found";
		return;
	}
	else
	{
		if(str[i] == ch)
		{
			cout << "Founded";
			return;
		}
		else
		{
			i++;
			Check_Character(i, str, ch);
		}
	}
}

