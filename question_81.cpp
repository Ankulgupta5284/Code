//{ Driver Code Starts
// driver code

#include<bits/stdc++.h>
using namespace std;

string LongestPalindromeSubString(string text);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<< LongestPalindromeSubString(s) << endl;
    }
    return 1;
}

// } Driver Code Ends


// return the longest palindrome substring

string LongestPalindromeSubString(string s)
{
    // Step 1: Preprocessing
    int n = s.size();
    string t = "^";
    for (int i = 0; i < n; i++) 
    {
        t += "#" + s.substr(i, 1);
    }
    t += "#$";
    n = t.size();
    
    // Step 2: Manacher's Algorithm
    vector<int> p(n);
    int center = 0, right = 0;
    for (int i = 1; i < n - 1; i++) {
        int mirror = 2 * center - i;
        if (right > i) {
            p[i] = min(right - i, p[mirror]);
        }
        while (t[i + (1 + p[i])] == t[i - (1 + p[i])]) 
        {
            p[i]++;
        }
        if (i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
    }
    
    // Step 3: Find the longest palindrome substring
    int max_len = 0, center_idx = 0;
    for (int i = 1; i < n - 1; i++) 
    {
        if (p[i] > max_len) 
        {
            max_len = p[i];
            center_idx = i;
        }
    }
    int start_idx = (center_idx - max_len) / 2;
    return s.substr(start_idx, max_len);


}
