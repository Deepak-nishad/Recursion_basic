#include<iostream>
using namespace std;
void merge(int arr1[],int l,int mid,int high )
{
	int i,j,k;
	int arr2[high+1];
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid &&j<=high)
	{
		if(arr1[i]<arr1[j])
		{
			arr2[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			arr2[k]=arr1[j];
			k++;
			j++;
		}
	}
	
	while (i <=mid)
        arr2[k++] = arr1[i++];
    while (j <=high )
        arr2[k++] = arr1[j++];
    
    for(int i=l;i<=high;i++)
    arr1[i]=arr2[i];
 
}
void merge_sort(int arr1[],int si,int ei)
{
if(si>=ei)
return;
int mid=(si+ei)/2;
merge_sort(arr1,si,mid);	
merge_sort(arr1,mid+1,ei);
merge(arr1,si,mid,ei);	
}
int main()
{
int arr1[]={8,5,7,5,8,9,6,2,4,8,3,4,7,8,2,0,1,100,99,25,38,54};
int n=sizeof(arr1)/sizeof(int);
merge_sort(arr1,0,n-1);
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
}
