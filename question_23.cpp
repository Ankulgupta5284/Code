//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int A;
        int B;
        sort(arr.begin(),arr.end());
        int temp=arr[0];
        if(arr[0]!=1){
            A=1;    // for ex-{2,2}
                    // here 1 is missing
        }
        for(int i=1;i<n;i++){
            if(arr[i]==temp){
                B=arr[i];
            temp=arr[i];
            }
            
            else if((arr[i]-temp)>1 && arr[0]==1){   // if arr[0]==1 then only we will excute it;
                A=temp+1;
                temp=arr[i];
            }
            else{
                temp=arr[i];
            }
        }
        if(arr[n-1]!=n){
            A=n;          // eg-1,2,2,3
        }
        vector<int> ans;
        ans.push_back(B);
        ans.push_back(A);
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
// TC -> O(N)
// SC-> O(1)