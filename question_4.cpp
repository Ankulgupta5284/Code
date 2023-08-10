//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

// } Driver Code Ends


//User function Template for C++
// main function start;

void rotate(int arr[], int n)
{
 int x=arr[n-1];
 int temp1=arr[0];
 for(int i=1;i<n;i++){
     int temp2=arr[i];
     arr[i]=temp1;
     temp1=temp2;
 }
 arr[0]=x;
}

// TC-> O(N)
// S.C-> O(1)