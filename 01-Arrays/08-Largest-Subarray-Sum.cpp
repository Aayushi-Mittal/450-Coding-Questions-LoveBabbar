/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here //Kadane's Algorithm
    int sum=0, mx=INT_MIN, mxarr=arr[0];
    for(int i=0; i<n; i++)
    {
        mxarr=max(mxarr, arr[i]);
        sum+=arr[i];
        mx=max(mx, sum);
        if(sum<0)
            sum=0;
        if(mx==0 && i==n-1)
            mx=mxarr;
    }
    return mx;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends