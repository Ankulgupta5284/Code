
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zerocount=0;
        int onecount=0;
        int twocount=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zerocount++;
            }
            else if(a[i]==1){
                onecount++;
            }
            else if(a[i]==2){
                twocount++;
            }
        }
        int i=0;
        while(zerocount){
            a[i]=0;
            i++;
            zerocount--;
        }
        while(onecount){
            a[i]=1;
            i++;
            onecount--;
        }
        while(twocount){
            a[i]=2;
            i++;
            twocount--;
        }
    
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends


// TC-> O(N)
// SC-> O(1)