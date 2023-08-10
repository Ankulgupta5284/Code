#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	   vector<int> pos;
	   vector<int> neg;
	   for(int i=0;i<n;i++){
	       if(arr[i]>=0){   // here zero also count in positive integer
	           pos.push_back(arr[i]);
	       }
	       else{
	           neg.push_back(arr[i]);
	       }
	   }
	   int m=pos.size();  // size of positive array
	   int l=neg.size();  // size of negative array
	   int s=min(m,l);
	   int i=0;
	   for(int j=0;j<s;j++){
	       arr[i]=pos[j];
	       i++;
	       arr[i]=neg[j];
	       i++;
	   }
	   if(m>l){
	       for(int j=s;j<m;j++){
	           arr[i]=pos[j];
	           i++;
	       }
	       
	   }
	   else if(l>m){
	       for(int j=s;j<l;j++){
	           arr[i]=neg[j];
	           i++;
	       }
	   }
	   
	   
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

// TC-> O(N)
// SC-> O(N)