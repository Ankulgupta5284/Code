//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
   void merge(int arr[], int l, int mid, int r)    
{    
    int i, j, k;  
    int n1 = mid - l + 1;    
    int n2 = r - mid;    
 
    int lArr[n1], rArr[n2]; //temporary arrays  
 
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++){
    lArr[i] = arr[l + i];    
    }
    for (int j = 0; j < n2; j++){    
    rArr[j] = arr[mid + 1 + j];
    }
 
    i = 0; /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = l;  /* initial index of merged sub-array */  
 
    while (i < n1 && j < n2)    
    {    
        if(lArr[i] <= rArr[j])    
        {    
            arr[k] = lArr[i];    
            i++;    
        }    
        else    
        {    
            arr[k] = rArr[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        arr[k] = lArr[i];    
        i++;    
        k++;    
    }    
 
    while (j<n2)    
    {    
        arr[k] = rArr[j];    
        j++;    
        k++;    
    }    
}    
 
void mergeSort(int arr[], int l, int r)  
{  
    if (l < r)   
    {  
        int mid = (l + r) / 2;  
        mergeSort(arr, l, mid);  
        mergeSort(arr, mid + 1, r);  
        merge(arr, l, mid, r);  
    }  
}
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
// TC-> O(Nlog(N))
 // SC-> O(N)