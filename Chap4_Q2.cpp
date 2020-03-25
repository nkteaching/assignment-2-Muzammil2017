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

void Sorting(Stack &s) 
{
	Stack s1;
	
	while(!s.isEmpty())
	{
		s1.push(s.pop());
	}
	
	Node *temp = s1.top;
	Node *temp2 = temp;
		
	while(temp!=NULL)
	{
		while(temp2->next!=NULL)
		{
			if(temp2->val < temp2->next->val)
			{
				swap(temp2->val, temp2->next->val);
			}
						
			temp2 = temp2->next;
		}
		
		temp = temp->next;
		temp2 = s1.top;
	}
	
	while(!s1.isEmpty())
	{
		s.push(s1.pop());
	}
}
int main()
{
	Stack s;
	s.push(6);
	s.push(7);
	s.push(2);
	s.push(1);
	s.push(8);
	cout<<"stack before sorting "<<endl;
	s.Display();
	cout<<endl;
	Sorting(s);
	cout<<"stack after sorting "<<endl;
	s.Display();
	}
