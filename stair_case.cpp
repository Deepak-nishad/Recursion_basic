#include <bits/stdc++.h>
using namespace std;
  
  int count(int n)
  {
  	if(n<0)
  	return 0;
  	if(n==0)
  	return 1;
  	int x=count(n-1);
  	int y=count(n-2);
  	int z=count(n-3);
  	return x+y+z;;
  }
  int main()
  {
  	
  	cout<<count(3);
  }
