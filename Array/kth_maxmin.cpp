#include <iostream>
using namespace std;
 
struct Pair
{
	int min;
	int max;
};
 
struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;
	int i;
 
	if(n%2==0)
	{
		if(arr[0]>arr[1])
		{
			minmax.max=arr[0];
			minmax.min=arr[1];
		}
		else
		{
			minmax.max=arr[1];
			minmax.min=arr[0];
		}
		i=2;
	}
	else
	{minmax.max=arr[0];
	minmax.min=arr[0];
	i=1;}
 
 
while(i<n-1)
{
	if (arr[i]>arr[i+1])
	{
		if(arr[i]>minmax.max)
		minmax.max=arr[i];
		if(arr[i+1]<minmax.min)
		minmax.min=arr[i+1];
	}
	else
	{
		if(arr[i+1]>minmax.max)
		minmax.max=arr[i+1];
		if(arr[i]<minmax.min)
		minmax.min=arr[i];
	}
	i+=2;
}
return minmax;
}
int main() {
	// your code goes here
	int arr[]={323,232,3,323,123};
	int arr_size=5;
	Pair minmax= getMinMax(arr,arr_size);
	cout<<"Minimum no. is"<<minmax.min<<endl;
	cout<<"Maximum no. is"<<minmax.max<<endl;
	return 0;
}
