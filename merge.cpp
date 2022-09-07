#include<iostream>

using namespace std;


void merge(int arr[],int l,int r,int m)
{
    
    int n1=m-l+1;
    int n2=r-m;
    
    int i,j,k;
    
    int L[n1],R[n2];
    
    for(i=0;i<n1;i++)
         L[i]=arr[l+i];
    
         
    for(j=0;j<n2;j++)
       R[j]=arr[m+1+j];
       
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            arr[k]=L[i++];
            
        else
            arr[k]=R[j++];
        k++;
    }
    while(i<n1)
        arr[k++]=L[i++];
    
    while(j<n2)
         arr[k++]=R[j++];
}

void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,r,m);
        
        
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
    
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}   
cout<<"\n";
}
