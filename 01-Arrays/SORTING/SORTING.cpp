// SORTING : A sorted array is an array in which each of the elements are sorted in some order such as numerical, alphabetical etc.
// Reference : GEEKS FOR GEEKS.

#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Bubble Sort : works by repeatedly swapping the adjacent elements if they are in wrong order.
// Complexity : O(n^2)
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

// Selection Sort : sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.
// Complexity : O(n^2)
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;
		swap(&arr[min_idx], &arr[i]);
	}
}

// Insertion Sort : array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
// Complexity : O(n^2)
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/*
    Divide and Conquer Algorithm (using Recursion)
*/

//Quick Sort : It picks an element as pivot and partitions the given array around the picked pivot.
// Complexity : Average case - O(n), Worst case - O(n^2)

// This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot.
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);  //correct position of pivot element.
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partitioning_index = partition(arr, low, high);
        quickSort(arr, low, partitioning_index - 1);
        quickSort(arr, partitioning_index + 1, high);
    }
}

//Merge Sort : It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.
//Complexity : O(n), Space-Complexity : O(n)

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1; //size of Left array
    int n2 = r - mid; //size of Right array
    int L[n1], R[n2]; //Left Array and Right Array
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int lefti,int righti){
    if(lefti>=righti){
        return;//returns recursively
    }
    int mid = (lefti+righti-1)/2;
    mergeSort(arr,lefti,mid);
    mergeSort(arr,mid+1,righti);
    merge(arr,lefti,mid,righti);
}

//Print Array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/*
    Main Program
*/

int main()
{
	int n=100, choice=0;
	int arr[n];
    cout<<"***SORTING*** \n 1. Bubble Sort O(n^2) \n 2. Selection Sort O(n^2) \n 3. Insertion Sort O(n^2)\n Divide and Conquer Algorithms \n 4. Quick Sort O(n^2) theta(n) \n 5. Merge Sort O(n)\n 6. Exit \n"<<endl;
    while(1)
    {
        cout<<"\nEnter your choice : ";
        cin>>choice;
        cout<<"Enter the size of the array : ";
        cin>>n;
        cout<<"Enter the elements of the array : ";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        switch(choice)
        {
            case 1 :
                bubbleSort(arr, n);
                printArray(arr, n);
                break;
            case 2 :
                selectionSort(arr, n);
                printArray(arr, n);
                break;
            case 3 :
                insertionSort(arr, n);
                printArray(arr, n);
                break;
            case 4 :
                quickSort(arr, 0, n-1);
                printArray(arr, n);
                break;
            case 5 :
                mergeSort(arr, 0, n-1);
                printArray(arr, n);
                break;
            default :
                exit(0);
                break;
        }
    }
	return 0;
}
