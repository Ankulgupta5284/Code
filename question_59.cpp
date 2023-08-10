//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_map<char,bool> mp;
	    int n=str.length();
	    for(int i=0;i<n;i++){
	        mp[str[i]]=false;
	}
	string ans;
	for(int i=0;i<n;i++){
	    if(mp[str[i]]==false){
	        ans.push_back(str[i]);
	        mp[str[i]]=true;
	    }
	}
	return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
// TC-> O(N)
// SC-> O(N)