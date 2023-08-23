//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
       vector<int> sortByFreq(int arr[],int n)
    {
        sort(arr,arr+n);
        vector<int>ans;
        map<int,int>count;
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
             while (!count.empty()) {
            int maxi = INT_MIN;
            int maxFreq = INT_MIN;

            for (auto it:count) {
                if (it.second > maxFreq) {
                    maxFreq = it.second;
                    maxi = it.first;
                }
            }
            

            for (int i = 0; i < maxFreq; i++) {
                ans.push_back(maxi);
            }

            count.erase(maxi);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends