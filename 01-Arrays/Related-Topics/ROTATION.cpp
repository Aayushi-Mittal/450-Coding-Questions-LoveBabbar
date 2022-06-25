// Rotation of an array - Time Complexity: O(n) (in two passes), Space Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k; // k-times rotated

    k = k % n;
    int r[n], l[n];

    for (int i = 0; i < n - k; i++)
    {
        r[i] = arr[i + k];
        l[i + k] = arr[i];
    }
    for (int i = n - k; i < n; i++)
    {
        r[i] = arr[i - n + k];
        l[i - n + k] = arr[i];
    }

    cout << "Left: ";
    for (int i = 0; i < n; i++)
        cout << l[i] << " ";

    cout << "\nRight: ";
    for (int i = 0; i < n; i++)
        cout << r[i] << " ";

    return 0;
}

/*
Sample Input:
7
1 2 3 4 5 6 7
23

Output:
Left: 6 7 1 2 3 4 5
Right: 3 4 5 6 7 1 2
*/