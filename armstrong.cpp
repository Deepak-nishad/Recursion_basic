 #include<conio.h>
using namespace std;
#include<iostream>
#include<iomanip>
#include<math.h>
int main()
{
	int number,digit,cube,sum=0;
	cout<<"Enter the number : ";
	cin>>number;
	int num2=number;
	while(number!=0)
	{
		digit=number%10;
		cube=pow(digit,3);
		sum=sum+cube;
		number=number/10;
	}
	cout<<endl<<sum<<endl;
	if(sum==num2)
	cout<<"No is armstrong "<<num2<<endl;
	else
	cout<<"Not a armstrong number";

}
