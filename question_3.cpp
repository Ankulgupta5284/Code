//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
    int ap(int arr[],int low,int high,int x){
        if(low>high) {
            return INT_MAX;
        }
        int mid=(low+high)/2;
        if(arr[mid+1]-arr[mid]!=x){
            return arr[mid]+x;
        }
        if(mid>0 && arr[mid]-arr[mid-1]!=x){
            return arr[mid-1]+x;
        }
        if(arr[mid]==arr[0]+mid*x){    // if this condition is satisfy then left side of mid there is not any missing element
            return ap(arr,mid+1,high,x);
        }
        else{      // otherwise in left side we will get missing element;
            return ap(arr,0,mid-1,x);
        }
    }
    
    
public:
    int findMissing(int arr[], int n) {
        int x=(arr[n-1]-arr[0])/n;
        int ans=ap(arr,0,n-1,x);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends

// imp point
// T.C->o(log(n));
// s.c->o(1);
// this solution is velid if only one element will be missing

