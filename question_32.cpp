//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
      int Maximum_Sum(vector<vector<int>> &mat, int N, int K) {
        // Create a prefix sum matrix to store the cumulative sum of elements
        vector<vector<int>> prefixSum(N, vector<int>(N, 0));

        // Calculate the prefix sum matrix
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int sum = mat[i][j];
                // Add the sum of the previous row
                if (i > 0) sum += prefixSum[i - 1][j];
                // Add the sum of the previous column
                if (j > 0) sum += prefixSum[i][j - 1];
                // Subtract the sum of the overlapping region (top-left)
                if (i > 0 && j > 0) sum -= prefixSum[i - 1][j - 1];
                prefixSum[i][j] = sum;
            }
        }

        int maxSum = INT_MIN;

        // Iterate through all possible sub-grids of size K x K
        for (int i = K - 1; i < N; i++) {
            for (int j = K - 1; j < N; j++) {
                int sum = prefixSum[i][j];
                // Subtract the sum of elements above the sub-grid
                if (i - K >= 0) sum -= prefixSum[i - K][j];
                // Subtract the sum of elements to the left of the sub-grid
                if (j - K >= 0) sum -= prefixSum[i][j - K];
                // Add the sum of elements in the overlapping region (top-left)
                if (i - K >= 0 && j - K >= 0) sum += prefixSum[i - K][j - K];
                // Update the maximum sum
                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}

// } Driver Code Ends
//TC-> O(N^2)
// SC-> O(N^2)