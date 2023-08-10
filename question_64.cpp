//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  // function for converting string to number
   string findSum(string num1, string num2)
{
    string result = ""; // Initialize the result string

    int carry = 0; // Initialize carry to 0

    // Iterate through the strings from right to left
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry>0) {
        // Convert characters to integers, if there are digits left
        int digit1 = (i >= 0) ? num1[i] - '0' : 0; // may be carry>0 and i and j will be  negative
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        // Calculate sum and carry
        int total = digit1 + digit2 + carry;
        carry = total / 10;
        int digit = total % 10;

        // Prepend the current digit to the result
        result = to_string(digit) + result;

        // Move to the next digits
        i--;
        j--;
    }

    // Remove any leading zeros from the result
    int index = 0;
    while (index < result.size() && result[index] == '0') {
        index++;
    }
    result = result.substr(index);

    // If result is empty (sum is zero), return "0"
    return (result.empty()) ? "0" : result;
    
    
}
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends
// TC-> O(N);
// SC-> O(result.length())