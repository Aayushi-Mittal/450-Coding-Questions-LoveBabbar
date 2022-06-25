// Inserting an element - Time Complexity: O(n) even for sorted arrays, Space Complexity: O(1)

#include <iostream>
using namespace std;

int main()
{
	int n, x, idx, i = 0;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;	// element you want to insert
	cin >> idx; // index at which you want to insert the element

	n++;

	for (i = n - 2; i >= idx; i--)
		arr[i + 1] = arr[i];

	arr[idx] = x;

	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}

/*
Sample Input:
5
1 2 3 4 5
1
4

Output:
1 2 3 4 1 5
*/