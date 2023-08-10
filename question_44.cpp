//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns area of the largest rectangle of 1's
int maxArea(vector<bool> M[], int r, int c) {
    vector<vector<int>> F(r);
    for(auto&f:F) f.resize(c);
    for (int j = 0; j < c; j++)
        for (int i=0, p=0; i < r; i++)
            p = F[i][j] = M[i][j] ? p+1 : 0;
    vector<int> G;
    int R = 0;
    for (int i = 0; i < r; i++) {
        G.assign(r+1, 0);
        for (int j = 0; j < c; j++)
            G[F[i][j]]++;
        for (int j = r-1; j > 0; j--)
            G[j] += G[j+1];
        for (int j = 1; j <= r; j++)
            R = max(R, G[j]*j);
    }
    return R;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c, x;
        cin >> r >> c;
        vector<bool> mat[r];
        for (int i = 0; i < r; i++) {
            mat[i].assign(c, false);
            for (int j = 0; j < c; j++) {
                cin >> x;
                mat[i][j] = x;
            }
        }
        Solution ob;
        auto ans = ob.maxArea(mat, r, c);
        cout << ans << "\n";

    }
    return 0;
}

// } Driver Code Ends