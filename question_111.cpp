//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
 vector<int> RopeCutting(int arr[], int n)
    {
    
        vector<int> v;
        sort(arr,arr+n);
        int count=0;
        if(n==1){return {0};}
        int i=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]!=arr[i]){
                count=n-j;
               v.push_back(count);
                i=j;
            }
        }
        if(count==0){
            return {0};
        }
        else{
          return v;
        }    
    }
};

//{ Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}
// } Driver Code Ends
// TC-> O(N log(N))
// SC-> O(1)


