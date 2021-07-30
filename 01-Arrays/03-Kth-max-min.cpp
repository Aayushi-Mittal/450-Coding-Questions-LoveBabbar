// Approach-1 (STL sort function)
// find the Kth smallest element in the given array.

#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int k, int n, int arr)
{
    sort(arr, arr+n);
    return arr[k];
}

int main()
{
    int k, n;
    cout<<"Enter the size of the array: "
    cin>>k>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of the array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"kth smallest element : "<<kthSmallest(n, k, arr)<<endl;
}


/*

Sample I/O

Input: 
6
7 10 4 3 20 15

Output: 
7

Time Complexity - O(n)
Space Complexity - O(1)

*/


// Approach-2 (Insertion, Selection, Bubble Sort)
// find the Kth smallest element in the given array.

#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int k, int n, int arr)
{
    //quick sort
    
}

int main()
{
    int k, n;
    cout<<"Enter the size of the array: "
    cin>>k>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of the array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"kth smallest element : "<<kthSmallest(n, k, arr)<<endl;
}


// Approach-3 (Merge Sort, Quick Sort)
// find the Kth smallest element in the given array.


// Approach-4 (Priority Queue - Heaps)
// find the Kth smallest element in the given array.

#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int k, int n, int arr)
{
    int low = *min_element(arr, arr + n);
    int high = *max_element(arr, arr + n);
    
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        int countless = 0, countequal = 0;   // count of elements less than mid and the elements which are equal to mid.
        for (int i = 0; i < n; ++i) 
        {
            if (arr[i] < mid)
                countless++;
            else if (arr[i] == mid)
                countequal++;
        }
    
        // If mid is the kth smallest
        if (countless < k && (countless + countequal) >= k) 
            return mid;
        // If the required element is less than mid
        else if (countless >= k) 
            high = mid - 1;
        // If the required element is greater than mid
        else if (countless < k && countless + countequal < k) 
            low = mid + 1;
    }
}

int main()
{
    int k, n;
    cout<<"Enter the size of the array: "
    cin>>k>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of the array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"kth smallest element : "<<kthSmallest(n, k, arr)<<endl;
}




// Approach-5 (Binary Search)
// find the Kth smallest element in the given array.

#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int k, int n, int arr)
{
    int low = *min_element(arr, arr + n);
    int high = *max_element(arr, arr + n);
    
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        int countless = 0, countequal = 0;   // count of elements less than mid and the elements which are equal to mid.
        for (int i = 0; i < n; ++i) 
        {
            if (arr[i] < mid)
                countless++;
            else if (arr[i] == mid)
                countequal++;
        }
    
        // If mid is the kth smallest
        if (countless < k && (countless + countequal) >= k) 
            return mid;
        // If the required element is less than mid
        else if (countless >= k) 
            high = mid - 1;
        // If the required element is greater than mid
        else if (countless < k && countless + countequal < k) 
            low = mid + 1;
    }
}

int main()
{
    int k, n;
    cout<<"Enter the size of the array: "
    cin>>k>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of the array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"kth smallest element : "<<kthSmallest(n, k, arr)<<endl;
}
