//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        set<int> temp;
        for(int i=0;i<n;i++){
            temp.insert(a[i]);
        }
        int j=0;
        for(auto k:temp){   // we can iterate a set but we can not excess set element using temp[i] like this
            a[j]=k;
            j++;
        }
        return j;  // it will return size of set;
        
    }
    
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// TC->O(N)
// SC-> O(N)

// } Driver Code Ends