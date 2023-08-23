//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
       int zero(int a){
        int x=5;
        int ans=0;
        while(x<=a){
            ans+=a/x;
            x=x*5;
        }
        return ans;
    }
    
      int findNum(int n)
        {
            int l=1,r=n*5;
            while(l<=r){
                int mid=(l+r)/2;
                if(zero(mid)>=n && zero(mid-1)<n){
                    return mid;
                }
                else if(zero(mid)>=n && zero(mid-1)>=n){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends
// TC-> O(log(N*5))
// Sc-> O(1)
// approach-> you knpw how to calculate trailing zero;
// if we want a number which has trailng zero n that number will be less than or equal to (N*5);
// that why we are applying binary short for 1 to till N*5
// and try to find the minimum number which has n trailing zero thats shit

// okk sir -> haa beta 
// kese ho sir-> ekdum sahi beta
