//Write a program to reverse an array or string.
/*
SAMPLE INPUT
6
4 7 a 8 3 b
OUTPUT
arr[6] : {4, 7, a, 8, 3, b, }
revarr[6] : {b, 3, 8, a, 7, 4, }
COMPLEXITY
Time : O(n)
Space : O(n)
*/

#include<iostream>
using namespace std;
int main()
{
    int n=100, i=0;
    char arr[n], revarr[n];
    cin>>n;                 //size of array
    for(i=0; i<n; i++)
    {
        cin>>arr[i];        //characters of array
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
        cout<<revarr[i]<<", ";  //elements of reverse array
    }
    cout<<"}\n";
}
