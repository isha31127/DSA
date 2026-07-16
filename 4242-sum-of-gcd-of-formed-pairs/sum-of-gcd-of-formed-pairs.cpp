class Solution {
public:
    long long gcd(long long  a,long long b){
        while (b != 0){
            int r = b;
            b = a % b;
            a = r;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int maxNum = nums[0];
        vector<int> prefixGcd;
        prefixGcd.push_back(nums[0]);
        for(int i = 1 ; i < nums.size(); i++){
            maxNum = max(nums[i],maxNum);
            prefixGcd.push_back(gcd(nums[i],maxNum)); 
        } 
        sort(prefixGcd.begin(),prefixGcd.end());
        int n = prefixGcd.size();
        int i = 0 , j = n - 1;
        long long ans = 0;
        while(i < n/2){
            ans += gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }
        return ans;
    }
};