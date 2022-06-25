// Reversing an array - Time Complexity: O(n), Space Complexity: O(1)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // two pointers
    int i = 0, j = n - 1;

    while (i < j)
    {
        // swapping
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

/*
Sample Input:
5
1 2 3 4 5

Output:
5 4 3 2 1
*/