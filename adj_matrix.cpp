

#include <iostream>

using namespace std;


int adj_mat[20][20];



void add_edge(int u,int v)
{
    adj_mat[u][v]=1;
}
void display(int v)
{
    for(int i=0;i<v;i++)
     {for(int j=0;j<v;j++)
       {
         cout<<adj_mat[i][j]<<" ";  
       }
       cout<<"\n";
      }
}





int main()
{
    int v;
    
    cout<<"Enter the number of vertices :";
    cin>>v;

char ch;

do{
    
    cout<<"Enter do you wanna add edge?(y/n)";
    cin>>ch;
    if(ch=='y')
    {
        int source,dest;
        cout<<"Enter the source and destination :";
        cin>>source>>dest;
    add_edge(source,dest);
    }
    
}while(ch!='n');








display(v);


    return 0;
}
