//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++
int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}
 
// Using counting sort to sort the elements in the basis of significant places
void count(int arr[], int n, int p) {
  const int max = 10;
  int ans[n];
  int freq[max];
 
  for (int i = 0; i < max; ++i)
    freq[i] = 0;
 
  // Calculate frequency of elements
  for (int i = 0; i < n; i++)
    freq[(arr[i] / p) % 10]++;
 
  // Calculate cumulative frequency
  for (int i = 1; i < max; i++)
    freq[i] += freq[i - 1];
 
  // Place the elements in sorted order
  for (int i = n - 1; i >= 0; i--) {
    ans[freq[(arr[i] / p) % 10] - 1] = arr[i];
    freq[(arr[i] / p) % 10]--;
  }
 
  for (int i = 0; i < n; i++)
    arr[i] = ans[i];
}
 
// Main function to implement radix sort
void radixSort (int arr[], int n) {
  // Get maximum element using inbuilt function
  int max = *max_element(arr,arr+n);
 
  // Apply counting sort to sort elements based on place value.
  for (int i = 1; max / i > 0; i *= 10)
    count(arr, n, i);
}


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
// TC-> O(N*K)
// TC-> O(N+K)