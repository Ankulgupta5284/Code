

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], long long len)
{
    long long l = 0;
    long long r = len -1;
    long long area = 0;
     
    while (l < r)
    {
        // Calculating the max area
        area = max(area, min(A[l],
                        A[r]) * (r - l));
                         
            if (A[l] < A[r])  // we want maximum element as well as minimun distance 
                l += 1;    
                 
            else
                r -= 1;
    }
    return area;
}


//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// TC-> O(N)
// SC-> O(1)