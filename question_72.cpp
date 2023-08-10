
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    vector<int> c;
	    char ch=s[0];
	    int n=s.length();
	    for(int i=0;i<n;i++){
	        if(s[i]==ch){
	            c.push_back(i);
	        }
	    }
	    for(int j=1;j<c.size();j++){
	        int l=c[j];
	        string t=s.substr(0,l);
	        int r=n/l;
	        string d="";
	        while(r>0){
	            d+=t;
	            r--;
	        }
	        if(d==s){
	            return 1;
	        }
	        
	    }
	    return 0;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
// Tc->O(N)
//sc-> O(k)