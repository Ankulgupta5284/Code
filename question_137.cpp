//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

  class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) {
        // code here 
        // upper top triangle
        
        for(int j = 1; j < m; j++) {
            vector<int> a;
            int i = 0;
            int p = j;
            while(i < n && p < m) {
                a.push_back(matrix[i][p]);
                i++;
                p++;
            }
            
            sort(a.begin(), a.end(), greater<int>());
            --i; 
            --p;
            while(i >= 0 && p >= j) {
                matrix[i][p] = a[i];
                i--;
                p--;
            }
        }
        
        
        // lower triangle
        
        for(int i = 1; i < n; i++) {
            vector<int> a;
            int j = 0;
            int p = i;
            while(j < m && p < n) {
                a.push_back(matrix[p][j]);
                p++;
                j++;
            }
            
            sort(a.begin(), a.end());
            --p;
            --j;
            while(j >= 0 && p >= i) {
                matrix[p][j] = a[j];
                p--;
                j--;
            }
        }
        
    }
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        int inputline2[n*m];
        for (int i = 0; i < n*m; ++i)
            cin>> inputline2[i];
        vector<vector<int> > matrix( n , vector<int> (m, 0));

        for(int i=0; i<n; i++) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = inputline2[i * m + j]; 
            }
        }
        
        Solution ob;
        ob.diagonalSort(matrix, n, m);

        // print the modified matrix
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                cout << matrix[i][j] << " "; 
            } 
            cout << endl; 
        }    
    }
    return 0;
}


// } Driver Code Ends

// TC-> O(M+N log(M+N))
// SC-> O(max(m+n))