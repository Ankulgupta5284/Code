//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int ans = 0;
        for(int i=0; i<str.length(); i++){
            if(mp[str[i]] < mp[str[i+1]]){
                ans += mp[str[i+1]]-mp[str[i]];
                i++;
            }
            else{
                ans += mp[str[i]];
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends

// first we are creating mapping betweem sum no and there roman no. after that we are traversing the roman no. string .
// cash one -> if (mp[i]<mp[i+1])  in this case ans+=mp[i+1]-mp[i] as well as we will increse i by 2
// case 2 -> if (mp[i]>=mp[i+1]) in this case ans+=mp[i] and we will increse i by 1 only;
