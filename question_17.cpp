//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int a[], int n) {
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==0){
            l=mid+1;
        }
        else if(a[mid]==1){
            if(mid==0 || ( mid >0 && a[mid-1]==0)){
                return mid;
            }
            else{
                r=mid-1;
            }
        }
    }
    return -1;
}


// TC-> O(log(N))
// SC-> O(1)