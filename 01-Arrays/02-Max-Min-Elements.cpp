// Approach-1
//Write a program to find maximum and minimum elements in an array.

#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxnum = a[0], minnum = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > maxnum)
            maxnum = a[i];
        if (a[i] < minnum)
            minnum = a[i];
    }
    cout << "Maximum : " << maxnum << endl;
    cout << "Minimum : " << minnum << endl;
    return 0;
}

/*

Sample I/O

Input:
Enter the size of the array: 6
Enter 6 elements of the array: 89 2 13 104 83 0

Output:
Maximum : 0
Minimum : 89

Time Complexity : O(n)
Space Complexity : O(1)

Worst Case: descending Order,  1 + 2(n-2) comparisions
Best Case: ascending Order, 1 + n – 2 comparisions

*/



// Approach-2 (Tournament Method)
// Maximum and minimum of an array using minimum number of comparisons.

#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxnum = a[0], minnum = a[0];

    if (arr[0] > arr[1]) 
    {
        maxnum = arr[0];
        minnum = arr[1];
    } 
    else
    {
        maxnum = arr[1];
        minnum = arr[0];
    } 

    for (i = 2; i < n; i++)
    {
        if (a[i] > maxnum)
            maxnum = a[i];
        else if (a[i] < minnum)
            minnum = a[i];
    }
    cout << "Maximum : " << maxnum << endl;
    cout << "Minimum : " << minnum << endl;
    return 0;
}

/*

Sample I/O

Input:
Enter the size of the array: 6
Enter 6 elements of the array: 89 2 13 104 83 0

Output:
Maximum : 0
Minimum : 89

Time Complexity : O(n)
Space Complexity : O(1)
Algorithm Paradigm : Divide and Conquer

*/