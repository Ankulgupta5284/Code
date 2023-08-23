//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);
        int i=0;
        while(arr[i]<=0){
            i++;
        }
        if(arr[i]!=1){
            return 1;
        }
     for(int j=i;j<n-1;j++){
         if((arr[j+1]-arr[j])>1){
             return arr[j]+1;
         }
     }
     return arr[n-1]+1;
        
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
// TC-> O(N)
// SC-> O(1)
