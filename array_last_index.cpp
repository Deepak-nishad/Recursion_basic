#include<iostream>
using namespace std;
int check(int arr[],int n,int key)
{
if(n==0)
return -1;
if(n==1)
if(key==arr[0])
return 0;
else
return -1;
int small= check(arr+1,n-1,key);
if(small==-1)
return -1;
else
return small+1;
}
int main()
{
	int arr[]={9,8,10,8};
	int n=sizeof(arr)/sizeof(int);
   cout<<check(arr,n,8);
}
