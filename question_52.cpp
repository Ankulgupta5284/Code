//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    int s1l=S1.length();
    int s2l=S2.length();
    int l=0;// for s1
    int m=0; // for s2
    string ans;
    
    while(l<=s1l-1 && m<=s2l-1){
        ans.push_back(S1[l]);
        l++;
        ans.push_back(S2[m]);
        m++;
    }
    while(l<=s1l-1){
        ans.push_back(S1[l]);
        l++;
    }
    while(m<=s2l-1){
        ans.push_back(S2[m]);
        m++;
        
    }
    return ans;
}