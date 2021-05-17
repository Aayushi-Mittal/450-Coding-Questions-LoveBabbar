//Write a program to reverse an array or string.

#include<iostream>
using namespace std;
int main()
{
    int n=100, i=0;
    char arr[n], revarr[n];
    cout<<"Enter the size of the array: ";
    cin>>n;                 //size of array
    cout<<"Enter "<<n<<" elements of the array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\narr["<<n<<"] : {";
    for(i=0; i<n; i++)
    {
        revarr[i]=arr[n-i-1];
        cout<<arr[i]<<", ";
    }
    cout<<"}\n";
    cout<<"revarr["<<n<<"] : {";
    for(i=0; i<n; i++)
    {
        cout<<revarr[i]<<", ";
    }
    cout<<"}\n";
    return 0;
}

/*

Sample I/O

Input:
Enter the size of the array: 6
Enter 6 elements of the array: 4 7 a 8 3 b

Output:
arr[6] : {4, 7, a, 8, 3, b, }
revarr[6] : {b, 3, 8, a, 7, 4, }

Time Complexity : O(n)
Space Complexity : O(n)

*/
