//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> a1, int n, vector<int> a2, int m) 
    {
        unordered_map<int,bool> mp1;
        for(int i=0;i<m;i++){
            mp1[a2[i]]=true;
        }
        unordered_map<int,int> mp2;
        for(int j=0;j<n;j++){
            mp2[a1[j]]=0;
        }
        for(int j=0;j<m;j++){
            mp2[a2[j]]=0;
        }
        for(int i=0;i<n;i++){
            if(mp1[a1[i]]==true){
                mp2[a1[i]]++;
                a1[i]=-1;
            }
        }
        vector<int> ans;
        for(int i=0;i<m;i++){
            while(mp2[a2[i]]>0){
                ans.push_back(a2[i]);
                mp2[a2[i]]--;
            }
        }
        sort(a1.begin(),a1.end());
        for(auto k:a1){
        if(k!=-1){
            ans.push_back(k);
        }
        }
        return ans;
        
        
        
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends
// Tc-> O(max(m,n))
// sc-> O(max(m,n))