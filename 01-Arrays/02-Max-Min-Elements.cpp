//Write a program to find maximum and minimum elements in an array.
/*
COMPLEXITY - O(n)
SAMPLE INPUT
6
4 7 8 9 21 40 6 4 1
OUTPUT
MAX : 40
MIN : 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n, i=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int max=a[0], min=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            max=a[i];
    }
    cout<<"MAX : "<<max<<endl;
    cout<<"MIN : "<<min<<endl;
}
