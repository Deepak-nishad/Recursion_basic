#include<iostream>
using namespace std;

void merge(int arr[],int si,int m,int ei)
{
int n1=m-si+1;
int n2=ei-m;
 
 int l[n1],R[n2];
 for(int i=0;i<n1;i++)
 {
 	l[i]=arr[si+i];
 }
 
 
 for(int j=0;j<n2;j++)
 {
 	R[j]=arr[m+1+j];
 }
 
 int i=0;
 int j=0;
 int k=si;
 
 while(i<n1 && j<n2)
 {
 	if(l[i]<=R[j])
     {
     	arr[k]=l[i];
     	i++;
    }
    
    else
    {
    	arr[k]=R[j];
    	j++;
	}
			k++;
 }
  
  while(i<n1)
  {
  	arr[k]=l[i];
  	i++;
  	j++;
  }
  
  while(j<n2)
  {
  	arr[k]=R[j];
  	j++;
  	k++;
  }
  
 }
void mergesort(int arr[],int si,int ei)
{
	if(si>=ei)
	return ;
	int mid=(si+ei)/2;
	mergesort(arr,si,mid);
	mergesort(arr,mid+1,ei);
	merge(arr,si,mid,ei);
}
int main()
{
	int arr[]={2,28,8,11,10,21};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,5);
	for(int i=0;i<n;i++)
	cout<<arr[i]<< " ";
}
