//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
    // Write your code here

class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int *answer)
    {
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int j=0;j<m;j++){
            s.insert(b[j]);
        }
        
        int i=0;
        int p=s.size();
        for(auto  k:s){
            answer[i]=k;
            i++;
        }
        return p;
   
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m+5];
        for(int j=0;j<m;j++)
            cin>>b[j];
        Solution ob;
        int answer[n+m+5];
        int x=ob.mergeNsort(a, b, n, m, answer);
        
        for(int i=0;i<x;i++)
        cout<<answer[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}
// } Driver Code Ends
// we can not iterate an array by using auto
// TC-> O(m+n)
 // SC-> O(m+n)