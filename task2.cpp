#include <iostream>


using namespace std;


int i=0;

int size=0;

struct Node{
    
    int data;
    struct Node* next;
};

struct Node* head1;
struct Node* head2;


void insert(int data,struct Node** head)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=nullptr;
    if(*head==nullptr)
        *head=newNode;
    else{
        struct Node* temp=*head;
         while(temp->next!=nullptr)
         {
             temp=temp->next;
         }
         temp->next=newNode;
    }
}
void merge(struct Node** head1,struct Node** head2)
{
    
    
    struct Node* temp=*head1;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=*head2;
    
    
}


void insertPos(int pos,struct Node** head,int data)
{
     struct Node* temp=*head;
     struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
     newNode->data=data;
     struct Node* prev;
     
     if(pos==1 || pos==0)
        {
            newNode->next=temp;
            *head=newNode;
            return;
        }
     
      for(int i=1;i<pos;i++)
      {
          prev=temp;
          if(temp->next==nullptr)
                {
                    
                    cout<<"Invalid Position Try again..";
                    return;
                }
                
          temp=temp->next;
          
      }
           
    newNode->next=temp;
    prev->next=newNode;
    
}
void print(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
}


void invokeMe(struct Node** head)
{
    int data;
    
       do{
           
      cin>>data; 
       if(data>0)
       {
           insert(data,head);
       }
       
       
   }while(data>=0);
    
}
void removeDupes(struct Node** head)
{
    struct Node *current, *check, *dup;
    current = *head;
 
    while (current != nullptr && current->next != nullptr) {
        check= current;

        while (check->next != nullptr) {
            if (current->data == check->next->data) {
                dup = check->next;
                check->next = check->next->next;
                delete (dup);
            }
            else 
                check = check->next;
        }
        current = current->next;
    }
}
int main()
{

   cout<<"Enter the list 1:" ;
   invokeMe(&head1);
   cout<<"Enter the list 2: ";
   invokeMe(&head2);
   
   cout<<"List 1:";
    print(head1);
    cout<<"\nList 2:";
    print(head2);
    
    cout<<"\nMerge the lists";
    merge(&head1,&head2);
    
    
    cout<<"\nThe list after Merging";
    print(head1);
    
    //cout<<"\n";
    char opt;
    do{
        
        cout<<"\nDo you wanna insert data(y/n): ";
        cin>>opt;
        if(opt=='y'){
            int pos,data;
            cout<<"\nEnter the position and data :";
        cin>>pos>>data;
          insertPos(pos,&head1,data);
          print(head1);
          cout<<"\n";
        }
    }while(opt!='n');
    
    
    print(head1);
    removeDupes(&head1);
    cout<<'\n';
    print(head1);
}

