//Kth smallest element
/*
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

/*
COMPLEXITY - O(n)
SAMPLE INPUT
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4
OUTPUT
7
15
*/


/*
Complexity : O(n^2)
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    int temp;
    for(int i=0; i<k; i++)
    {
        for(int j=i+1; j<r+1 && i<r; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[k-1];
}
*/

//complexity: O(nlogn)

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr, arr + r+1); 
    return arr[k-1];
}
