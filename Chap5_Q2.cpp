#include<iostream>
using namespace std;
class node
{
 public:
 int data;
 node *next;
};node *head, *tail;

class Linkklist:public node{
 
 public:
 Linkklist()
 {
    head=NULL;
    tail=NULL;
 }
 
 void display()
 {
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
 
  void Insert_at_Last(int data)
  {
  node *temp=new node();
  temp->data=data;
  if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
 }
 int CountNodes(node *head)
	{
		static int count=0;
		if(head==NULL)
		{
			return count;
		}
		else
		{   count++;
			head=head->next;
			return CountNodes(head);
		}
		
	}
 
};
int main()
{
 Linkklist l1;
 
 l1.Insert_at_Last(2);
 l1.Insert_at_Last(4);
 l1.Insert_at_Last(6);
 l1.display();
 int count=0;
 count=l1.CountNodes(head);
 cout<<"Length of linked list: "<<count;
 
 
}


