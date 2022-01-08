#include<iostream>
using namespace std;
int stair_Case(int n)
{
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    return stair_Case(n-1)+stair_Case(n-2)+stair_Case(n-3);
}
int main()
{
int n;
cin>>n;
int output=stair_Case(n);
cout<<output<<endl;
}