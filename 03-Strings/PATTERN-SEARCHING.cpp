//Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. You may assume that n > m.

// Naiive Approach
// Worst Time Complexity : O(m*(n-m+1)) Example: txt="AAAAAAAAAAB" pat="AAB"
// Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int present=1;
	string txt="AAAAAABAAAAAAAAAAB", pat="AAAB";
	cin>>txt>>pat;
	for(int i=0; i<n-m+1; i++)
	{
		present=1;
		for(int j=0; j<m; j++)
		{
			if(txt[i+j]!=pat[j]){
				present=0;
				break;
			}
		}
		if(present==1)
			cout<<pat<<" is present at index "<<i<<endl;
	}
	return 0;
}

// Rabin and Karp Algorithm - matches the hash value of the pattern with the hash value of current substring of text, and if the hash values match then only it starts matching individual characters.
// Worst Time Complexity : O(m*n) Example: txt="AAAAAAAAAAA" pat="AAA"
// Best, Average case Time complexity: O(n+m)
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c1 = n/3;
		(n%3==1) ? c1+=1 : c1;
		cout<<c1<<" "<<n-c1<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
	cin>>t;
	while(t--)
	{
        unordered_map<char,int> pairs;
        int r=0, g=0, n=0, rem=0;
		string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
            pairs[s[i]]++;
        for(auto itr=pairs.begin(); itr!=pairs.end(); itr++)
        {
            if(itr->second>=3)
            {
                r++; g++; n++;
            }
            else if(itr->second==2)
            {
                r++; g++;
            }
            else
                rem++;
        }
        r+=rem/2;
        cout<<r<<endl;
	}
	return 0;
}


