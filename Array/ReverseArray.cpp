#include <iostream>
using namespace std;
 
void rev(int arr[], int start, int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
 
void print(int arr[], int size)
{
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main() {
	// your code goes here
	int arr[]= {2,3,4,1,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	rev(arr,0,n-1);
	cout<<"Reversed array is"<<endl;
	print(arr,n);
	return 0;
}
