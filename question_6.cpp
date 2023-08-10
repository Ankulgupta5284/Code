//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
      int zerocount=0;
      int onecount=0;
      for(int i=0;i<N;i++){
          if(A[i]==0){
              zerocount++;
          }
          else{
              onecount++;
          }
      }
      for(int i=0;i<zerocount;i++){
          A[i]=0;
      }
      for(int i=zerocount;i<N;i++){
          A[i]=1;
      }
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}

// TC-> O(N);
// SC-> O(1);


// } Driver Code Ends