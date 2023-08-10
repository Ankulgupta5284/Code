//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
          string upper, lower;
    for (char c : s) {
        if (isupper(c)) {
            upper += c;
        } else {
            lower += c;
        }
    }

    sort(upper.begin(), upper.end());
    sort(lower.begin(), lower.end());

    string result = "";
    int upperIndex = 0, lowerIndex = 0;

    for (char c : s) {
        if (isupper(c)) {
            result += upper[upperIndex];
            upperIndex++;
        } else {
            result += lower[lowerIndex];
            lowerIndex++;
        }
    }

    return result;
}
    
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends
// TC-> O(N)
// SC-> O(N)