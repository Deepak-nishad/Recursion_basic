#include<iostream>
using namespace std;
int check(int arr[],int n,int key)
{
	/* check array is sorted or not 
	
	if(n==0||n==1)
	return 1;
	if(arr[0]>arr[1])
	return 0;
	check(arr+1,n-1);*/
/*   sum of array
	if(n==0)	
	return 0;
	if(n==1)
	return arr[0];
	int small=check(arr+1,n-1);
	return small+arr[0];
	*/
	
  /* first index 
	if(n==0)
	return -1;
    	if(arr[0]==key)
    	return 0;	
    int small=check(arr+1,n-1,key);
  if(small==-1)
  return -1;
    return small+1;*/
    


	
}
int main()
{
	int arr[]={};
	int n=sizeof(arr)/sizeof(int);
   cout<<check(arr,n,10);
   /*
	int sum=check(arr,n);
	cout<<sum<<endl;
	*/
	
	/*
	int n1=check(arr,n);
	if(n1==1)
	cout<<" Array is sorted ";
	else
	cout<<"Not sorted ";
	*/
	
}
