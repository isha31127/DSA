class Solution {
public:
    int gcd(int a,int b){
        while(b != 0){
            int r = b;
            b = a % r;
            a = r;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int minVal = nums[0];
        int maxVal = nums[0];
        for(int i = 1; i < nums.size(); i++){
            minVal = min(minVal,nums[i]);
            maxVal = max(maxVal,nums[i]);
        }
        return gcd(minVal,maxVal);
    }
};