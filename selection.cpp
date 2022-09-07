#include<iostream>
using namespace std;


void selectSort(int arr[],int n)
{
    

for(int i=0;i<n-1;i++)
{
   int min=arr[i];
   bool swap=false;
   int index;
 for(int j=i+1;j<n;j++)
 {
     if(arr[j]<min)
     {
         min=arr[j];
         swap=true;
         index=j;
     }
 }
 if(swap)
 {
     int temp=arr[i];
     arr[i]=arr[index];
     arr[index]=temp;


 }


}

}


int main()
{
    
    int n;
    
    cout<<"Enter the number of elements to be inserted ?";
    cin>>n;
    int arr[n];
    int data;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data to be inserted :";
        cin>>data;
        arr[i]=data;
    }
    
    
    

selectSort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}



