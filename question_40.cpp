//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
          int i=0,j=0;
        long curr=1;
        long max=0;
        while(j<n)
        {
            curr=(long)curr*a[j];
            while(i<=j && curr>=k)
            {
                curr=(long)(curr/a[i]);
                i++;
            }
            max+=j-i+1;
            j++;
        }
        return max;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends