#include<bits/stdc++.h>
using namespace std;

template<class X>

struct Node
{
	X data;
	Node *next, *prev;
	
	Node(X data)
	{
		data = data;
		next = NULL;
		prev = NULL;
	}
};

template<class X>
class Stack
{
	public:
		Node<X> *top = NULL, *back = NULL;
	
		void push(X data)
		{
			if(top == NULL)
			{
				top = new Node<X>(data);
				back = top;
			}
			
			else
			{
				back->next = new Node<X>(data);
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
				n = back->data;
				back = back->prev;
				delete back->next;
				
				return n;
			}
			
			else
			{
				n = back->data;
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
		
		void print()
		{
			Node<X> *temp = top;
			
			while(top != NULL)
			{
				cout << top->data << " ";
				top = top->next;
			}
			
			top = temp;
		}
};

struct MyStruct
{
	int a, b;
	int arr[20];
	
	MyStruct()
	{
		a = 0;
		b = 0;
		
		arr[20] = {0};
	}
};

int main()
{
	Stack<int> s1;
	Stack<MyStruct> s2;
}
