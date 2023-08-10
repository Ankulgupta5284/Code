//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    int l=0;
    int r=n-1;
    int lsum=a[l];
    int rsum=a[r];
    while(l<=r){
        if(l==r && lsum==rsum){
            return l+1;
        }
        else if(lsum>rsum){
            r--;
            rsum+=a[r];
        }
        else if(rsum>lsum){
            l++;
            lsum+=a[l];
        }
        else if(rsum==lsum){
            r--;
            rsum+=a[r];
            l++;
            lsum+=a[l];
        }
    }
    
    return -1;
    
   
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends

// TC-> O(n);
// SC-> O(1);