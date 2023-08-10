//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
     int transform(string A, string B) {
         //code here.
        int n=A.size();
        int m=B.size();
        string temp=A;
        string temp1=B;
        sort(temp.begin(),temp.end());
        sort(temp1.begin(),temp1.end());
        if(temp!=temp1)
        return -1;
        if(n!=m)
        return -1;
        int i=n-1,j=m-1;
        int cnt=0;
        int cnt2=0;
        while(i>=0)
        {
            if(A[i]==B[j])
            {
            
                i--;
                j--;
                cnt2++;
            }
            else
            {
              
                i--;
                cnt++;
            }
        }
        
      return cnt;
    
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends