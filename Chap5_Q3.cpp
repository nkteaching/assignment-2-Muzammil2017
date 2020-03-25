#include <bits/stdc++.h> 
using namespace std;

void reverse() {
char ch;
cin.get(ch);
if (ch != '\n')
  reverse();
cout.put(ch);
}


int main(){
	reverse(); //folowing function prints the input in reverse order
}
