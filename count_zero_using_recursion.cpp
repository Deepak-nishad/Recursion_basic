#include <bits/stdc++.h>
using namespace std;

int count_zero(int m)
{
if(m==0)
return 1;
if(m>0&&m<10)
return 0;
int ls=m%10;
int small=count_zero(m/10);
if(ls==0)
{
	return small+1;
}
return small;
}
int main()
{
	int a=300;
	int output=count_zero(a);
	cout<<output<<" ";
}
