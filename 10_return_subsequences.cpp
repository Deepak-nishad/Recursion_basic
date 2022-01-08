#include<iostream>
#include<string.h>
using namespace std;

int subs(string input, string output[])
{
    if(input.size()==0)
    {
        output[0]=" ";
        return 1;
    }
    string small_string=input.substr(1);
    int smalloutput=subs(small_string,output);
    for(int i=0;i<smalloutput;i++)
    {
        output[i+smalloutput]=input[0]+output[i];
    }
    return 2*smalloutput;

}
int main() 
{
string input;
cin>>input;
string *output= new string [500];
int count= subs(input,output);
for(int i=0;i<count;i++)
cout<<output[i]<<endl;
}