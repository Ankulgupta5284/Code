//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n=S.length();
        string ans;
        string temp;
        for(int i=n-1;i>=0;i--){
            if(S[i]=='.'){
                reverse(temp.begin(),temp.end());
                ans.append(temp); // append function add string behind a string
                ans.push_back('.');
                temp.clear(); // it used to clear the string
            }
            else{
                temp.push_back(S[i]);
            }
        }
          reverse(temp.begin(),temp.end());
        ans.append(temp);
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends   // here N is the length of string
// TC-> O(N);
// SC-> O(N);