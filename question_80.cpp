//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool solve(string&wild, string& pattern, int i, int j) {
        // base case
        if(i<0 && j<0) {
            return true;
        }
        if(i>=0 && j<0) {
            return false;
        }
        if(i<0 && j>=0) {
            for(int k=0;k<=j;k++) {
                if(pattern[k]!='*') {
                    return false;
                }
            }
            return true;
        }
        if((wild[i]==pattern[j]) || pattern[j]=='?' ) {
            return solve(wild,pattern,i-1,j-1);
        }
        else if(pattern[j]=='*') {
            return (solve(wild,pattern,i-1,j) || solve(wild,pattern,i,j-1));
        }
        else {
            return false;
        }
    }
    bool match(string wild, string pattern)
    {
         int wild_size=wild.size();
        int patt_size=pattern.size();
        return solve(pattern,wild,patt_size-1,wild_size-1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends
