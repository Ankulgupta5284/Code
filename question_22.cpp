//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // sorting algo
void countingSort(int arr[], int n) {
    if (n <= 1) {
        return; // No need to sort an array of size 1 or less
    }

    int max_val = arr[0];
    int min_val = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    int range = max_val - min_val + 1;
    int* count = new int[range]();

    for (int i = 0; i < n; ++i) {
        count[arr[i] - min_val]++;
    }

    int output_index = 0;
    for (int i = 0; i < range; ++i) {
        while (count[i] > 0) {
            arr[output_index] = i + min_val;
            output_index++;
            count[i]--;
        }
    }

    delete[] count;
}
    
    
    int numofsubset(int arr[], int n)
    {
        countingSort(arr,n);
        int p=0;
        
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])>1){
                p++;
            }
        }
        
        return p+1;
    }
};

//{ Driver Code Starts.
// Driven Program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        Solution ob;
	    cout << ob.numofsubset(arr, n) << endl;
	}
	return 0;
}

// } Driver Code Ends