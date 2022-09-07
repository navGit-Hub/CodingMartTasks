 
#include <iostream>
 
using namespace std;
//stack
 
struct Node{
  
   int data;
   struct Node* next;
  
};
 
struct Node* head;
 
void push(int data)
{
   
    struct Node* newNode=(struct Node*)(malloc(sizeof(struct Node*)));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void print()
{
   
   
    struct Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void pop()
{
 
struct Node* temp=head;
head=temp->next;
free(temp);
 
}
 
 
 
 
 
 
int main()
{
   cout<<"stack operation\n";
  
   int data;
  
   do{
       cin>>data;
      
       if(data>0)
           push(data);
      
   }while(data>=0);
 
cout<<"After insertion :"<<print()<<"\n";
 
 
while(head!=nullptr)
{
   pop();
 
}
 
cout<<"After the pop operation :"<<print();
 
print();
 
  
 
   return 0;
}
 
 
//doubly linked list
 
 
#include <iostream>
 
using namespace std;
 
int i=0;
 
struct Node{
  
   int data;
   struct Node* next;
   struct Node* prev;
};
 
struct Node* head;
 
 
void insert(int data)
{
   struct Node* newNode=(struct Node*)malloc(sizeof(struct Node*));
   newNode->data=data;
   if(head==nullptr)
   {
       newNode->prev=nullptr;
       newNode->next=nullptr;
       head=newNode;
   }
   else{
       struct Node* temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=newNode;
       newNode->prev=temp;
       newNode->next=nullptr;
   }
  
  
}
void del()
{
   struct Node* temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->prev->next=null;
        free(temp);
  
}
void print()
{
   struct Node* temp=head;
   while(temp!=nullptr)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }  
}
int main()
{
  
  int data;
  do{
     cin>>data;
      if(data>0)
      {
          insert(data);
      }
     
     
  }while(data>=0);
   del();
   print();
}


