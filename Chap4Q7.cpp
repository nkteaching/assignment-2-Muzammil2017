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

class Queue
{
	Node *top = NULL, *bottom = NULL;
	
	public:
		void Enqueue(int value)
		{
			if(top == NULL)
			{
				top = new Node(value);
				bottom = top;
			}
			
			else
			{
				bottom->next = new Node(value);
				bottom->next->prev = bottom;
				bottom = bottom->next;
			}
		}
		
		int Dequeue()
		{
			if(bottom == NULL)
			{
				cout << "Stack is empty";
				
				return -1;
			}
			
			int n;
			
			if(top != bottom)
			{
				n = top->val;
				top = top->next;
				delete top->prev;
				top->prev = NULL;
				
				return n;
			}
			
			else
			{
				n = bottom->val;
				delete bottom;
				bottom = NULL;
				
				return n;
			}
		}
		
		
		
		Node* getTop()
		{
			return top;
		}
};


class Stack:public Queue
{
	Node *top = NULL, *bottom = NULL;
	Queue q;
		
	public:
		void Push(int value)
		{
			q.Enqueue(value);
		}
		
		int pop()
		{
			q.Dequeue();
		}
				
		void print()
		{
			Node *temp = q.getTop();
			
			while(temp != NULL)
			{
				cout << temp->val << " ";
				temp = temp->next;
			}
			
		}
};
int main()
{
	Stack s1;
	cout<<"After pushing"<<endl;
	s1.Push(3);
	s1.Push(6);
	s1.Push(7);
	s1.Push(8);
	s1.print();
	
	s1.pop();
	cout<<"\nAfter popping"<<endl;
	s1.print();
	
}
