#include<iostream>
using namespace std;
void toh(int n,char s,char d,char ausilary)
{
	if(n==1)
	{
	cout<<s<<" -> "<<d<<endl;
		return;
	}
	toh(n-1,s,ausilary,d);
	cout<<s<<" -> "<<d<<endl;
	toh(n-1,ausilary,d,s);

}
void toh(int n,int s,int a,int d)
{
	if(n==1)
	{
	cout<<s<<" -> "<<d<<endl;
		return;
	}
	toh(n-1,s,d,a);
	cout<<s<<" -> "<<d<<endl;
	toh(n-1,a,s,d);

}
int main()
{
	char source='A';
	char ausilary='B';
	char destination='C';
	int n=3;
	toh(n,source,destination,ausilary);
	cout<<endl;
	toh(3,1,2,3);
}
