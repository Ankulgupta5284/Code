//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    unordered_map<char,int> mp;
    char getMaxOccuringChar(string str)
    {
        sort(str.begin(),str.end());
        int n=str.length();
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    char ch=str[0];
    int max=mp[str[0]];
    for(int i=1;i<n;i++){
        if(mp[str[i]]>max){
            ch=str[i];
            max=mp[str[i]];
        }
    }
    return ch;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
// TC-> O(N);
// SC-> O(max distict digit);