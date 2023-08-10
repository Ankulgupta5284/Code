//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
  int getMinimumDays(int N, string S, vector<int> P) {
 // consecutiveCount to store the
    // number of consecutive similar
    // type character.
    int consecutiveCount = 0;
 
    // Count the number of consecutive
    // similar type character.
    for (int i = 1; i < N; i++) {
        if (S[i] == S[i - 1]) {
            consecutiveCount++;
        }
    }
 
    // If Count of consecutive similar
    // type character is 0, then answer
    // is also 0.
    if (consecutiveCount == 0) {
        return 0;
    }
 
    // To find Minimum number of days
    // required to get required string.
    // We have to iterate the permutation
    // array P.
 
    for (int i = 0; i < N; i++) {
 
        // Now we check whether we can
        // change the string at s[p[i]].
 
        // Index to store the value of
        // permutation array, P[i].
        int index = P[i];
 
        // If we get two consecutive
        // similar character.
        if (index != 0 && S[index] == S[index - 1]) {
 
            // Reduce the count of consecutive
            // similar character.
            consecutiveCount--;
        }
 
        // If we get two consecutive
        // similar character.
        if (index != N - 1 && S[index] == S[index + 1]) {
 
            // Reduce the count of consecutive
            // similar character.
            consecutiveCount--;
        }
 
        // Update the string value
        // at the index.
        S[index] = '?';
 
        if (consecutiveCount == 0) {
 
            // If at ith day consecutiveCount
            // becomes 0 then, we should
            // return (i+1) as we have
            // taken 0 based indexing.
            return (i + 1);
        }
    }
 
    // If no such above case happened then
    // return -1 value,
    return -1;
}



};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code End
// TC-> O(N)
// SC-> O(1)
// step of question
// Initialize the variable say, consecutiveCount to store the number of consecutive similar characters or elements.
// Using a loop count the number of consecutive similar characters and store it in the consecutiveCount variable. If S[i] is the same as S[i+1] or S[i] is the same as S[i-1] then increase the consecutiveCount variable.
// If there is no consecutive similar type of character, i.e the value of the variable consecutiveCount is 0 then the answer will be 0. 
// If consecutiveCount != 0: we have to traverse the Permutation array using a loop with a loop variable, i.
// Initialize the variable say, index to store the value of permutation array, P[i]. 
// If S[index] == S[index-1]: Decrease the value of consecutiveCount by 1.
// If S[index] == S[index+1]: Decrease the value of consecutiveCount by 1.
// Update S[index] = ‘?’.
// If consecutiveCount == 0: return (i+1) value because at (i+1)th day we found that there is no consecutive similar type character(Except ‘?’) present in the string.
// If no such above case happened then return -1 value.