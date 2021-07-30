/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - O(n^2)
/*
int maxProfit(vector<int> prices)
{
    int maxprofit = 0;
    for (int i = 0; i < prices.length - 1; i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            int profit = prices[j] - prices[i];
            if (profit > maxprofit)
                maxprofit = profit;
        }
    }
    return maxprofit;
}
*/

// Optimized Approach - O(n)
int maxProfit(vector<int> prices)
{
    int minprice = INT_MAX;
    int maxprofit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        minprice = min(minprice, prices[i]);
        maxprofit = max(maxprofit, prices[i] - minprice);
    }
    return maxprofit;
}

//---------------------Driver Code Starts---------------------------
int main()
{
    vector<int> v;
    for(int i=0; i<v.size(); i++)
        cin>>v[i];
    cout<<maxProfit(v);
}
//---------------------Driver Code Ends-----------------------------


/*

Sample I/O

Input: prices = [7,1,5,3,6,4]
Output: 5

Input: prices = [7,6,4,3,1]
Output: 0

Other Test Cases:
//[2,4,1]
//[2,1,4]
//[1,4,2]

Time Complexity - O(n)
Space Complexity - O(1)

*/
