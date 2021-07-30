//Deleting an element from an array takes O(n) time even if we are given index of the element to be deleted. 
//The time complexity remains O(n) for sorted arrays as well. 

#include<iostream>
using namespace std;

int main()
{
	int n, x;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the elements of the array: ";
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<"Enter the element you want to delete: ";
	cin>>x;

	//searching x in the array
	for(int i=0; i<n; i++)
	{
		if(arr[i]==x)
			break;
	}

	// shifting elements after the index at which x is found.
	while(i<n-1)
		arr[i]=arr[i-1];

	//new size
	n--;

	cout << "Array after deletion of "<<x<<" is :";
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
	return 0;
}
