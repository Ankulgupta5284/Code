//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        unordered_map<int,bool> mp;
        for(int i=1;i<=leaves;i++){
            mp[i]=false;
        }
        for(int i=1;i<=leaves;i++){
            int s=0;
            for(int j=0;j<N;j++){
                if(i%frogs[j]==0){
                    s++;
                    break;
                }
            }
            if(s>0){
                mp[i]=true;
            }
        }
        
        int t=0;
        for(int i=1;i<=leaves;i++){
            if(mp[i]==false){
                t++;
            }
        }
        return t;
        
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends

// T C-> O(N*leaves)
// SC-> O(leaves)