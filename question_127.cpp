//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& i) {
         vector<vector<int>> m;
         if(i.size()==0){
             return m;
         }
         sort(i.begin(),i.end());
         vector<int> temp=i[0];
         for(auto it:i){
             if(it[0]<=temp[1]){
                 temp[1]=max(it[1],temp[1]);
             }
             else{
                 m.push_back(temp);
                 temp=it;
             }
         }
         m.push_back(temp);
         return m;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends