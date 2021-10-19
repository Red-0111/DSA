#include <iostream>
using namespace std;
 
void arrange(int arr[], int n)
	{
		int j=0;
		for(int i=0; i<n; i++)
		{
			if(arr[i]<0)
			{
				if(i!=j)
				{
					swap(arr[i], arr[j]);
				}
				j++;
			}
		}
	}
 
	void show(int arr[], int n)
	{
		for(int i=0;i<n;i++)
		cout<<arr[i];
	}
int main() {
	// your code goes here
	int arr[]={-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n= sizeof(arr)/sizeof(arr[0]);
	arrange(arr, n);
	show(arr, n);
	return 0;
}
