// Searching in an array
// * Linear Search: Time Complexity: O(n), Space Complexity: O(1)
// * Binary Search: Time Complexity: O(logn) (in sorted array), Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int binary_search(int n, int arr[], int x)
{
    int hi = n - 1, lo = 0, mid;
    while (lo < hi)
    {
        mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
            break;
        else if (arr[mid] < x)
            lo = mid;
        else
            hi = mid;
    }
    return mid;
}

int linear_search(int n, int arr[], int x)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }
    return i;
}

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x; // key - element to be found

    cout << "Before sorting: " << linear_search(n, arr, x) << endl;
    sort(arr, arr + n);
    cout << "After sorting: " << binary_search(n, arr, x) << endl;

    return 0;
}

/*
Sample Input:
7
6 5 2 4 3 1 7
3

Output:
Before sorting: 4
After sorting: 2
*/