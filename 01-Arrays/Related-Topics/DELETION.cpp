// Deleting an element - Time Complexity: O(n) even for sorted arrays, Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	bool found = false;

	cin >> n; // no of elements
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x; // element to be deleted

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			found = true;
		if (found)
			arr[i] = arr[i + 1]; // NOTE: It can't be arr[i-1]=arr[i]
	}
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << " ";
	}
}

/*
Sample Input:
5
1 2 3 4 5
1

Output:
2 3 4 5
*/