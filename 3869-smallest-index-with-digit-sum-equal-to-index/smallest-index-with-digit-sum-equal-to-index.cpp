class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int s = 0;
            int n = nums[i];
            while(n > 0){
                int r = n %10;
                s += r;
                n /= 10;
            }
            if(s == i)return s;
        }
        return -1;
    }
};