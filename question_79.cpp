//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    //  bool palindrome(string str) {
    //     int l = 0;
    //     int r = str.length() - 1;
    //     while (l <= r) {
    //         if (str[l] != str[r]) {
    //             return false;
    //         }
    //         l++;
    //         r--;
    //     }
    //     return true;
    // }

    int minChar(string str){
        //Write your code here
        
        string rev = str;
        reverse(rev.begin(), rev.end());
        
        string st = str+"$"+rev;
        
        int LPS[st.size()+1]={0};
        char s[st.size()+1];
        
        for(int i=0; i<st.size(); i++){
            s[i+1]=st[i];
        }
        
        int first=0, second=2;
        
        while(second<=st.size()){
            if(s[first+1] == s[second])
            {
                LPS[second]=first+1;
                first++;
                second++;
            }
            else
            {
                if(first == 0){
                    second++;
                }
                else
                {
                    first = LPS[first];
                }
            }
        }
        
        return str.size()-LPS[st.size()];
        
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
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends