#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};
class Stack
{
	public:
	Node *top;
		
	Stack()
	{
		top = NULL;
	}
		
	void Push(int x)
    {
	Node *t = new Node;
	if(t== NULL)				// If node not created
	{
		cout<<"Stack is FULL";
	}
	else
	{
		t->data = x;
		t->next = top;			// new node points to top
		top = t;				// top becomes t now
	}
}
int PoP()
{
	int x = -1;
	if(top == NULL)
	{
		cout <<"Stack is Empty"<<endl;
	}
	else
	{
		x = top->data;
		Node *t = top;
		top = top->next;
		delete t;
	}
	return x;
	
}

	bool isEmpty()
	{
		if(top == NULL)
		{
			return true;
		}
			
		else
		{
			return false;
		}
	}
void Display()
{
	Node *p = top;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}
void reverse(Stack &s)
{
	Stack s1, s2;
	
	while(!s.isEmpty())
	{
		s1.Push(s.PoP());
	}
	
	while(!s1.isEmpty())
	{
		s2.Push(s1.PoP());
	}
	
	while(!s2.isEmpty())
	{
		s.Push(s2.PoP());
	}
}
	
		
};
int main()
{
	Stack s;
	
	s.Push(8);
	s.Push(9);
	s.Push(10);
	cout<<"stack "<<endl;
	s.Display();
	cout<<endl;
	s.reverse(s);
	cout<<"stack after reversing "<<endl;
	s.Display();
	

	
}
