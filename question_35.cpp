class Solution {
public:
    int countPrimes(int n) {
        
        int ans=0;
        for(int i=2;i<n;i++){
            int k=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            k++;
            break;
        }
    }
    if(k==0){
        ans++;
    }
        }
        return ans;
    }
};