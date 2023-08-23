// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ans;
//         set<vector<int>> s;
//         for(int i=0;i<nums.size();i++){
//             int j=i+1;
//             int k=nums.size()-1;

//             while(j<k){
//                 int sum=nums[i]+nums[j]+nums[k];
//                 if(sum==0){
//             s.insert({nums[i],nums[j],nums[k]});
//         j++;
//         k--;
//                 }
//                 else if(sum>0){
//                     k--;
//                 }
//                 else{
//                     j++;
//                 }
//             }
//         }
//         for(auto i:s){
//             ans.push_back(i);
//         }
//         return ans;
//     }
// };
// // how we can insert a vector in to a set

// if sum==0 then  j++ and k-- simultaniously
// if sum>0 then k--;
// if sum<0 then j++;
// // TC-> O(N^2)
// // SC-> O(N)