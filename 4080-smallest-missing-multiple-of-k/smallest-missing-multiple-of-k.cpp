class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = k;
        int n = k;
        while(true){
            if(find(nums.begin(),nums.end(),n) != nums.end()){
                n +=k;
            }
            else{
                return n;
            }
        }
        return n;
    }
};