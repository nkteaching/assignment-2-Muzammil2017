#include <iostream>
using namespace std;

void Shortest_Recursion(int n)
{
	if(n > 0)
	{
		Shortest_Recursion(n-1);
		cout<<n<<" ";
	}
}

int main()
{
	Shortest_Recursion(7);
}
