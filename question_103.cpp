//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
      int sum(int n){
        int s=0;
        while(n>0){
            int l=n%10;
            s+=l;
            n=n/10;
        }
        return s;
    }
long long int numberCount(long long int N, long long int K) {

            long long int l=0;
            long long int r=N;
            while(l<=r){
                long long mid=(l+r)/2;
                if(abs(mid-sum(mid))>=K && abs(mid-1-sum(mid-1))<K){
                   return N-mid+1;
                }
                else if(abs(mid-sum(mid))>=K && abs(mid-1-sum(mid-1)>=K)){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            
           return 0;
           
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
// TC-> O(log(N))
// SC-> O(1)
