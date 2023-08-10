//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    
    bool areRotations(string s1,string s2)
    {
        int n=s1.length();
        if(s1.length()!=s2.length()){
            return false;
        }
        
       for(int i=0;i<s1.length();i++){
           if(s1[i]==s2[0]){
               if(s1.substr(i)==s2.substr(0,n-i)){
                   if(s2.substr(n-i)==s1.substr(0,i)){
                       return true;
                   }
                   }
               }
           }
           return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends
// TC-> O(N)
// SC-> O(1)