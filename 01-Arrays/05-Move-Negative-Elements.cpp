/*
Move all negative numbers to beginning and positive to end with constant extra space
Time Complexity: O(N)
Auxiliary Space: O(1)
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp, m=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            temp=arr[i];
            arr[i]=arr[m];
            arr[m]=temp;
            m++;
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}