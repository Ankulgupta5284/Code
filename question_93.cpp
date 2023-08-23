//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        vector<int> ans;
        int start = 0, end = n - 1;
        int mid = start + (end - start) / 2;
        int firstOccurrence = -1;
        while(start <= end)
        {
            if(arr[mid] == x)
            {
                firstOccurrence = mid;
                end = mid - 1;
            }
            else if(arr[mid] > x)
                end = mid - 1;
            else if(arr[mid] < x)
                start = mid + 1;
            mid = start + (end - start) / 2;
        }
        if(firstOccurrence == -1)
        {
            ans.push_back(-1);
            return ans;
        }
        start = 0;
        end = n - 1;
        mid = start + (end - start) / 2;
        int lastOccurrence = -1;
        while(start <= end)
        {
            if(arr[mid] == x)
            {
                lastOccurrence = mid;
                start = mid + 1;
            }
            else if(arr[mid] > x)
                end = mid - 1;
            else if(arr[mid] < x)
                start = mid + 1;
            mid = start + (end - start) / 2;
        }
        ans.push_back(firstOccurrence);
        ans.push_back(lastOccurrence);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends
// TC-> o(log(N))
// SC-> O(1)
