//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// } Driver Code Ends

class Solution {
  public:
    string reverse(string s){
        char temp;
        int n=s.size();
        for(int i=0;i<n/2;i++){
            temp = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = temp;
        }
        return s;
    }
        
    
    string removeReverse(string S) {
        int n = S.size();
        int left =0,right = n-1,fromLeft=1,fromRight=0;
        unordered_map<char,int> mp;
        
        for(int i=0;i<n;i++) mp[S[i]]++;
        
        if(mp.size()==1) return S.substr(0,1);
     
        while(left<right){
            if(fromLeft){
                if(mp[S[left]]>1){
                    mp[S[left]]--;
                    S.erase(S.begin()+left);
                    fromLeft=0;
                    fromRight=1;
                    left =0;
                    right = S.size()-1;
                }else {
                    left++;
                }
            }
            if(fromRight){
                if(mp[S[right]]>1){
                    mp[S[right]]--;
                    S.erase(S.begin()+right);
                    fromRight=0;
                    fromLeft=1;
                    left =0;
                    right = S.size()-1;
                }else {
                    right--;
                }
                
            }
        }
        
        return fromLeft? S : reverse(S);
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends