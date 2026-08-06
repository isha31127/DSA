class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n;i<= 100 ; i++){
            int temp = i;
            int s = 1;
            while(temp > 0){
                int r = temp % 10;
                s *= r;
                temp /= 10;
            }
            if(s % t == 0) return i;
        }
        return n;
    }
};