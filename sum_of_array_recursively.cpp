#include <bits/stdc++.h>
using namespace std;
int sum_recursion(int arr[],int size)
{
	int sum=0;
	if(size<=0)
	return 0;
	int small_output=sum_recursion(arr,size-1);
	return arr[size-1]+small_output;
}
int main()
{
	int arr[]={5,7,1};
	int n=sizeof(arr)/sizeof(int);
	int output=sum_recursion(arr,n);
	cout<<output;
}
