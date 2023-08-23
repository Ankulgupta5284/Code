//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	    sort(arr,arr+n);
		map<int,bool> mp;
		for(int i=A;i<=B;i++){
		    mp[i]=true;
		}
		for(int i=0;i<n;i++){
		    if(arr[i]!=arr[i-1]){
		        mp.erase(arr[i]);
		    }
		}
		if(mp.size()==0){
		    return true;
		}
		else{
		    return false;
		}
}

		 

};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends