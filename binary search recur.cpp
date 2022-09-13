#include <iostream>
using namespace std;
int binsearch(int arr[],int x,int low,int high)
{
	if (high>=low)
	{
    	int mid=(high+low)/2;
	
	if (arr[mid]==x)
		return mid;
	
	else if(arr[mid]<x)
		return binsearch( arr, x, mid+1, high);
	
	else if(arr[mid]>x)
		return binsearch(arr,x, low,mid-1);	
	}
	return -1;
}
int main(void)
{
	int arr[]={2,4,5,6,7,8,9};
	int x=4;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binsearch(arr,x,0,n-1);
	if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
