#include<iostream>
using namespace std;
#include<string.h>
void  replace_character(char arr[],char input,char input1)
{
    // if(arr[0] =="\0")
    // {
    // return;
    // }
    if(arr[0]==input)
    {
     arr[0]=input1;
    }
        
       return replace_character(arr+1,input,input1);

}
int main()
{
    char arr[100];
    char input,input1;
    cin>>arr;
    cin>>input>>input1;
    for(int i=0;i<=strlen(arr);i++)
    {
        cout<<arr[i]<<" ";
    }
    replace_character(arr,input,input1);
    
    for(int i=0;i<=strlen(arr);i++)
    {
        cout<<arr[i]<<" ";
    }
}