//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
    vector<int> temp;
    int k=0;
    for(int i=0;i<S1.length();i++){
        if(k>=2){
            break;
        }
        if(S1[i]!=S2[i]){
            temp.push_back(i);
            k++;
        }
        
    }
    if(temp.size()<=1){
            return 0;
        }
        int l=temp[0];
        int m=temp[1];
        swap(S1[l],S1[m]);
        if(S1==S2){
            return 1;
        }
        else{
            return 0;
        }
}
// TC-> O(N)
// SC -> O(1)