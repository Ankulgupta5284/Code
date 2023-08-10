//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // Handle the case of a single element or an empty array
        if (num == 1) {
            return arr[0];
        }
        
        int total_sum = arr[0];  // Calculate the total sum of the array
        int max_sum = arr[0];    // Initialize max_sum with the first element
        int min_sum = arr[0];    // Initialize min_sum with the first element
        int current_max = arr[0];  // Initialize current_max with the first element
        int current_min = arr[0];  // Initialize current_min with the first element
        
        for (int i = 1; i < num; i++) {
            // Calculate total sum
            total_sum += arr[i];
            
            // Update maximum subarray sum
            current_max = max(arr[i], current_max + arr[i]);
            max_sum = max(max_sum, current_max);
            
            // Update minimum subarray sum
            current_min = min(arr[i], current_min + arr[i]);
            min_sum = min(min_sum, current_min);
        }
        
        // If min_sum is equal to total_sum, it means all elements are negative.
        // In this case, return max_sum which is the maximum single subarray sum.
        if (min_sum == total_sum) {
            return max_sum;
        }
        
        // Calculate the circular subarray sum by subtracting min_sum from total_sum.
        // The maximum of circular subarray sum and maximum subarray sum is the answer.
        return max(max_sum, total_sum - min_sum);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
// TC-> O(N);
// SC-> O(1);