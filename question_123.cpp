//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
int minSwaps(vector<int>&nums)
	{
	    
	    int N = nums.size();
	   vector<pair<int,int>>V(N);
	   int c =0;
	   for(int i=0; i<N; i++)
	   {
	       V[i]={nums[i],i};
	       
	   }
	   
	   
	   sort(V.begin(), V.end());
	   
	   for(int i=0; i<N; i++)
	   {
	       if(i== V[i].second) continue;
	       else{
	           c++;
	           swap(V[i],V[V[i].second]);
	           i--;

	       }
	       
	   }
	   
	   return c;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
// TC-> O(N log(N))
// SC-> O(1)