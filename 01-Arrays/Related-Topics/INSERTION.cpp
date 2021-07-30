//Inserting an element from an array takes O(n). 
//The time complexity remains O(n) for sorted arrays as well. 

#include<iostream>
using namespace std;

int main()
{
	int n, x, idx;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the elements of the array: ";
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<"Enter the element you want to insert: ";
	cin>>x;
	cout<<"Enter the index at which you want to insert the element: ";
	cin>>idx;

	//searching index x in the array
	for(int i=0; i<n; i++)
	{
		if(i==idx)
			break;
	}
	i++;

	// shifting elements after the index idx.
	while(i<n)
		arr[i]=arr[i-1];

	// inserting element at index idx.
	arr[idx]=x;
	//new size
	n++;

	cout << "Array after deletion of "<<x<<" is :";
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
	return 0;
}