#include <bits/stdc++.h>
using namespace std;

/*double taylor(int x,int n)
{
	static double p=1,f=1;
	double r;
	if(n==0)
	return 1;
	else
	{
		r=taylor(x,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
		
	}
}*/

int f(int n)
{
	int x,y;
	if(n=0)
	return 0;
	if(n=1)
	return 1;
	
	 return f(n-1)+f(n-2);

}


int main()
{
	/* for tylar series
	cout<<taylor(1,10);
	
	*/
	cout<<f(5);
}
