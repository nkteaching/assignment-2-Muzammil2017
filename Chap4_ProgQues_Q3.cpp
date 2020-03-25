#include<iostream>
using namespace std;
struct node{
	char expression;
	node *next;
};
class Stack
{
	public:
	node *top;
	Stack()
	{
		top=NULL;
		
	}
	void push(char n)
	{
		node *t=new node;
		if(t==NULL)
		{
			cout<<endl<<"stack overflow";
			return ;
		}
		else
		{
			t->expression=n;
			t->next=top;
			top=t;
		}
	}
	char pop()
	{
		char x=-1;
		if(top==NULL)
		{
			cout<<endl<<"Stack underflow";
		}
		else
		{
			node *t;
			t=top;
			x=t->expression;
			top=top->next;
			delete t;
		}
		return x;
	}
bool CheckBalanced(char *exp)
{
    int i;
	char x;
	
	
	for(i=0;exp[i]!='\0';i++)
	{
			
		if(exp[i]=='('|| exp[i]=='[' || exp[i]=='{')
		{
			push(exp[i]);
		}
		
	    else if(exp[i]==')')
		{
			if(top==NULL)
			{
				return false;
			}
			x=pop();
			
			if(x=='[' || x=='{')
			{
				return 0;
			}
		}
		
		else if(exp[i]==']')
		{
			if(top==NULL)
			{
				return false;
			}
			x=pop();
			
			if(x=='(' || x=='{')
			{
				return false;
			}
		}
	    
	    else if(exp[i]=='}')
		{
			if(top==NULL)
			{
				return false;
			}
			x=pop();
			
			if(x=='[' || x=='(')
			{
				return false;
			}
		}		
			
	}
	if(top==NULL)
		{	return true;}
			
	else
		{	return false;}
}


};
int main()
{
	Stack s1;
	char *exp="5+{(13+7)/8-2*9"; 
    if(s1.CheckBalanced(exp))
    cout<<"Matching Symbols";
    else
    cout<<"No Matching Symbols";
	
}
