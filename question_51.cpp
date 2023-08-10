//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    
  unordered_map<char,int> st1;
  unordered_map<char,int> st2;
  int d=int('a');
  int e=int('z');
  for(int j=d;j<=e;j++){
      st1[char(j)]=0;
      st2[char(j)]=0;
  }
  for(int i=0;i<str1.length();i++){
      st1[str1[i]]++;
  }
  
  for(int i=0;i<str2.length();i++){
      st2[str2[i]]++;
  }
  for(int j=d;j<=e;j++){
      st1[char(j)]-=st2[char(j)];
  }
  int sum=0;
  for(int j=d;j<=e;j++){
      sum+=abs(st1[char(j)]);
  }
  return sum;
  
}
// we are creating two map and store number of time entry of each element after that substact that and than add abs sum