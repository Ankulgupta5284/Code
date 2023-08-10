//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution{
  public:
    vector<string>solve(int N) {
       vector<string>ans;
       // base case
       if(N==1) {
           return {"0", "1"};
       }
       vector<string>temp = solve(N-1);
       for(int i=0;i<temp.size();i++) {
           ans.push_back("0" + temp[i]);
       }
       for(int i=temp.size()-1;i>=0;i--) {
           ans.push_back("1" + temp[i]);
       }
       return ans;
   }
    vector <string> generateCode(int N)
    {
        return solve(N);
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		vector <string> res = obj.generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	return 0;
}


// } Driver Code Ends

// in this question we have to return a vector of string such that that vector must contain all the string in which all place should be fill by 0 and 1;
// lets eg if we have a no. n than total no. of string in that vector will be 2^n.
// we will use recorsion for this now you can see the code
// TC-> O(N)
// SC-> O(N) in recursive call as well as we are creating a vector of string of that also
