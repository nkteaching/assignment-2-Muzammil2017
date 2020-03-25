#include <iostream>
using namespace std;

struct node{
        int number;
        node *next,*prev;
            };
            node *top,*head;
                     
              void push(int);
              int pop(void);
              int isEmpty(void);
              int add(void);
              void memory(void);             
void push(int newnumber){
     
              top->number  = newnumber;
              top = top->next;           
     }          
    
int  pop(void){
     int num;
     top=top->prev;
     num = top->number;
     return num;
     }


int isEmpty(void){
    if(top ==NULL)
           return true;
    else
           return false;
    }


int main(){
cout<<"Enter yours values one by one.\nTo add top two values enter \" 0 \"!\nAt last to exit enter \" -1 \"!\n\n";
 top = NULL;
 memory();
 long int x;
 char c = 'y';
 do{
  cout << "Enter the value : ";
  cin  >> x;
  push(x);
 
  cout << "Do you want to continue";
  cin >> c;
 }while(c =='y' || c=='Y');
  if(x==0) {x=add();} 
}


int add(void){
 int firstValue,secondValue;
 
 if(top!=head)
  firstValue  = pop();
 else {
  cout << "Stack is empty!\n\n"; 
  return 0;
  }
  
 if(top!=head)
  secondValue = pop();
 else {
  cout << "Stack is empty!\n\n"; 
  return 0;
  }
 
 push(firstValue+secondValue);
 cout << "Answer is : " <<firstValue+secondValue<<endl;


}


void memory(){
    node *pre,*cur; 
    head = new node; 
    head->number = 0;
    head->prev  = 0;
    top = cur = pre = head;
    top->prev = NULL;
    
    for(int i=1;i<500;i++){
           cur->next = new node;
           pre       = cur;
           cur       = cur->next;
           cur->prev = pre;
       
            }          
}

