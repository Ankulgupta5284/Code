//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    
    int mx=0;
    map<char, int>mp;
    int i=0;
    int j=0;
    while(j<S.length()){
        mp[S[j]]++;
        if(mp.size()==j-i+1){
            mx= max(mx,j-i+1);
            j++;
        }
        else{
            while(mp.size() < j-i+1){
                mp[S[i]]--;
                if(mp[S[i]]==0){
                   mp.erase(S[i]);
                }
                i++;
            }
            j++;
        }
    }
    return mx;
}