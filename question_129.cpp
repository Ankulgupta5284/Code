//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        string ans;
        map<int,char> mp;
        for(int i=0;i<ar[0].size();i++){
            mp[i]=ar[0][i];
        }
        for(int i=0;i<mp.size();i++){
            int k=0;
        for(int j=1;j<n;j++){
            if(ar[j][i]!=mp[i]){
                k++;
            }
        }
        if(k==0){
            
            ans.push_back(mp[i]);
            
        }
        else{
            if(i==0){
                ans=ans+"-1";
                    
            }
         break;
    
        }
        
        
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}
// } Driver Code Ends