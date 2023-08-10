// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int k=0;
//         bool temp=false;
//         int n=s.length();
//         for(int i=n-1;i>=0;i--){
//             if(s[i]==' ' && temp==true){
//                 break;
//             }
//             else if(s[i]!=' '){
//                 k++;
//                 temp=true;
//             }
            
//         }
//         return k;
//     }
// };
// TC-> O(N);
// SC-> O(1);