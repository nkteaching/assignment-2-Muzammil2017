#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next, *prev;
	
	Node(int value)
	{
		val = value;
		next = NULL;
		prev = NULL;
	}
};

class Stack
{	
	public:
		Node *top = NULL, *back = NULL;
		
		void push(int value)
		{
			if(top == NULL)
			{
				top = new Node(value);
				back = top;
			}
			
			else
			{
				back->next = new Node(value);
				back->next->prev = back;
				back = back->next;
			}
		}
		
		int pop()
		{
			if(top == NULL)
			{
				cout << "Stack is empty";
				
				return -1;
			}
			
			int n;
			
			if(back != top)
			{
				n = back->val;
				back = back->prev;
				delete back->next;
				
				return n;
			}
			
			else
			{
				n = back->val;
				delete back;
				top = NULL;
				
				return n;
			}
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
			Node *temp = top;
			
			while(top != NULL)
			{
				cout << top->val << " ";
				top = top->next;
			}
			
			top = temp;
		}
};

void reverse(Stack &s) 
{
	Stack s1;
	
	while(!s.isEmpty())
	{
		s1.push(s.pop());
	}
	
	Node *temp = s1.top;
	
	while(temp!=NULL)
	{
		s.push(temp->val);
		temp = temp->next;
	}
}

int main()
{
	Stack s;
	s.push(6);
	s.push(7);
	s.push(8);
	cout<<"stack "<<endl;
	s.Display();
	cout<<endl;
	reverse(s);
	cout<<"stack after reversing "<<endl;
	s.Display();
	}
