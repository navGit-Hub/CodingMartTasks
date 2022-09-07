#include <iostream>
#include<list>
#include<iterator>
using namespace std;



void add_edge(list<int> adj_list[],int u,int v)
{
 
 adj_list[u].push_back(v);
      
}



void display(list<int> adj_list[],int v)
{
   for(int i = 1; i<=v; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
         cout << *it << " ";
      }
      cout << endl;
   }
    
    
    
}







int main()
{
    int v;
    
   
  
    cout<<"Enter the number of vertices :";
    cin>>v;
    list<int> adj_list[v];

char ch;

do{
    
    cout<<"Enter do you wanna add edge?(y/n)";
    cin>>ch;
    if(ch=='y')
    {
        int source,dest;
        cout<<"Enter the source and destination :";
        cin>>source>>dest;
     add_edge(adj_list, source,dest);
    }
    
}while(ch!='n');
   
display(adj_list,v);




    return 0;
}