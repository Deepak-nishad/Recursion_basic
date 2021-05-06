#include <bits/stdc++.h>
using namespace std;
int last_digit( int n)
{
	if(n<10)
	return n;
	int lst=n%10;
	return last_digit(n/10)+lst;
}
int main()
{
	cout<<last_digit(11155)<<" ";
}
