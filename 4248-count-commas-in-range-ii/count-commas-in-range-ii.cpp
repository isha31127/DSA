class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999) return 0;
        long long c = 0;
        long long s = 1000;
        while(s <= n){
            c += n - s + 1;
            s *= 1000;
        }
        return c;
    }
};