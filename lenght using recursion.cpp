#include<iostream>
using namespace std;

void removeX(char arr[])
{
	if(arr[0]=='\0')
	return ;
	if(arr[0]!='x')
	{
	removeX(arr+1);
	}
	else
	{
		int i=1;
		for( ;arr[i]!='\0';i++)
		{
			arr[i-1]=arr[i];
		}
	 arr[i-1]=arr[i];
	 removeX(arr);	
	}
}
int length(char arr[])
{
	if(arr[0]=='\0')
	return 0; 
	int small= length(arr+1);
	return small+1;
}
int main()
{
	char str[100];
	cin>>str;
	cout<<length(str)<<endl;
//	int l=length(str);	
//	cout<<l<<endl;
	
removeX(str);
cout<<str;
cout<<length(str)<<endl;
}
