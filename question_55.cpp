//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans;
        sort(arr,arr+N);
        char temp;
        int k=0;
        for(int i=0;i<arr[0].size();i++){
            temp=arr[0][i];
            for(int j=1;j<N;j++){
                if(arr[j][i]!=temp){
                    k++;
                    break;
                }
                
            }
            if(k>0){
                break;
            }
            else{
                ans.push_back(temp);
            }
            
        }

        if(ans.size()==0){
            return "-1";
        }
        else{
            return ans;
        }
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends