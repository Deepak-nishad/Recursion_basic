#include<iostream>
#include<math.h>
using namespace std;
int gp(int ft,int lt,int cr)
{
	if(lt==1)
	return ft;
	if(lt==2)
	return ft*cr;
	int small=gp(ft,lt-1,cr);
	return small*cr;
}
int main()
{
	int ft,lt,cr;
	cin>>ft>>lt>>cr;
	cout<<gp(ft,lt,cr);
}
