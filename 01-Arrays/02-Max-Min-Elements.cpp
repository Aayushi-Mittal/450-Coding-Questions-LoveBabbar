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
            maxnum = a[i];
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

*/
