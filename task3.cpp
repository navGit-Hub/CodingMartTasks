#include <iostream>
#include <queue>
#include <map>

using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;

};

int sum=0;

BstNode* GetNewNode(int data)
{
    BstNode* newNode=new BstNode();
    newNode->data=data;
    newNode->left=nullptr;
    newNode->right=nullptr;
    return newNode;
}

bool Search(BstNode* root,int data)
{
    if(root==nullptr)
       return false;
       else if(root->data==data)
       return true;
       else if(data<=root->data)
       return Search(root->left,data);
       else
       return Search(root->right,data);
}


int max(int num1,int num2)
{
    if(num1>num2)
    return num1;
    return num2;
}

int FindHeight(BstNode* root)
{
    
    if(root==nullptr)
     return -1;

     return max(FindHeight(root->left),FindHeight(root->right))+1;
     

}

void levelOrder(BstNode *root){
	if(root == nullptr) return;
	queue<BstNode*> Q;
	Q.push(root);  
	
	while(!Q.empty()) {
		BstNode* current = Q.front();
		Q.pop(); 
		cout<<current->data<<" ";
		if(current->left != nullptr) Q.push(current->left);
		if(current->right != nullptr) Q.push(current->right);
	}
}

void Preorder(BstNode* root)
{
    if(root==nullptr)
    return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    
}

 void Inorder(BstNode* root)
 {
     if(root==nullptr)
       return;
       
       if(root->left==nullptr && root->right==nullptr)
          sum+=root->data;
       
       
       Inorder(root->left);
       cout<<root->data<<" ";
       Inorder(root->right);
 }

void Postorder(BstNode* root)
{
    if(root==nullptr)
       return;
       Postorder(root->left);
       Postorder(root->right);
       cout<<root->data<<" ";
}
void Sum(BstNode* root)
 {   
     if(root==nullptr)
       return;   
       if(root->left==nullptr && root->right==nullptr)
          sum+=root->data;     
       Sum(root->left);
       Sum(root->right);
 }

void getVerticalOrder(BstNode* root, int hd, map<int, vector<int>> &m)
{

    if (root == nullptr)
        return;
 

    m[hd].push_back(root->data);
 
    getVerticalOrder(root->left, hd-1, m);
 
  
    getVerticalOrder(root->right, hd+1, m);
}

void printVerticalOrder(BstNode* root)
{


    map < int,vector<int> > m;
    int hd = 0;
    getVerticalOrder(root, hd,m);
 

    map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << "\n";
    }
}



BstNode* Insert(BstNode* root,int data)
{
    if(root==nullptr)
    {
        root=GetNewNode(data);
    }
    else if(data<=root->data)
    {
      root->left= Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
        
    
    return root;
    
    
    
}

BstNode* commonAncestor(BstNode* root,BstNode* p,BstNode* q)
{
    
       BstNode* current=root;

       while(current!=nullptr && current->left && current->right)
       {
           if(p->data>current->data && q->data>current->data)
             current=current->right;
            else if(p->data<current->data && q->data<current->data)
             current=current->left;
       else return current;
       }
       return current;
}


int main()
{

    BstNode*  root=nullptr;
char ch;
  do{

  cout<<"Do you wanna insert data(y/n)?";
  cin>>ch;
  if(ch=='y')
  {
      int data;
 cout<<"Enter the data:";
 cin>>data;
 root=Insert(root,data);
  }
  }while(ch!='n');
 
cout<<"Height of the tree is: "<<FindHeight(root);

    int number;
    cout<<"\nEnter number to be searched\n";
    cin>>number;
    if(Search(root,number)==true)
    cout<<"Found\n";
    else
    cout<<"Not Found\n"; 

 
     cout<<"Level Order traversal :";
    levelOrder(root);
    cout<<"\nInorder traversal :";
    Inorder(root);
   cout<<"\nPostorder traversal :";
    Postorder(root);
    cout<<"\nPreorder traversal :";
    Preorder(root);


BstNode* temp=commonAncestor(root,root->right,root->left);
cout<<"\nThe common ancestor is :";
cout<<temp->data<<"\n";

cout<<"The vertical order traversal is :"<<'\n';
    printVerticalOrder(root);
    
 cout<<"The sum of leaf nodes is:";
 Sum(root);
cout<<sum<<"\n";    
    
     
}