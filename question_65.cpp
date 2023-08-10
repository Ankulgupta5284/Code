//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{

    public:
    int longestUniqueSubsttr(string S){
        //code
        int n = S.size(),i=0,j=0,mxLen=0,size=0;
        vector<int> v(26,0);
        while(j < n){
            v[S[j]-'a']++;
            if(v[S[j]-'a'] == 1) size++;
            if(size < j-i+1){
                while(size < j-i+1){
                    v[S[i]-'a']--;
                    if(v[S[i]-'a'] == 0){
                        size--;
                    }
                    i++;
                }
                j++;
            }else if(size == j-i+1){
                mxLen = max(mxLen,j-i+1);
                j++;
            }
        }
        return mxLen;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends