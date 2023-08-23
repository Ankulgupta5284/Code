// class Solution {
// public:
//     int findNthDigit(int n) {
//         int base = 9;
//         long digits = 1;
//         int temp=0;
//         while (temp+digits*base<n){
//             temp+=base*digits;
//             base=base*10;
//             digits+=1;
//         }
//        n-=temp;
//        int num=pow(10,digits-1);
//        num+=(n-1)/digits;
//        int idx=(n-1)%digits;
//        string s=to_string(num);
//        return s[idx]-'0';
//     }


// };


