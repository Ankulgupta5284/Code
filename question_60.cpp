//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    


 int count=0,flage=0;
    string f,g;
    
    for(int i=0;i<S.length();i++)
    {
       if(i%2==0) f+='0';
       else f+='1';
       
    }
    for(int i=0;i<S.length();i++)
    {
       if(i%2==0) g+='1';
       else g+='0';
       
    }
    for(int i=0;i<S.length();i++)
    {
       if(f[i]!=S[i]) count++;
       if(g[i]!=S[i]) flage++;
    }
    count=min(count,flage);
    return count;
}

// TC-> O(N)
// SC-> O(N)
// we have to flip 0 to 1 or 1 to 0;
// we have make two string f and g which are starting from 1 or 0 and are alternative after that we compare with original string .
// no. of character which are not matching minimum of both string that will be no. of count
