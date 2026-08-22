class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int temp = n;
        while(n != 0){
            int r = n % 10;
            sum += r;
            prod *= r;
            n /= 10;
        }
        int d = sum + prod;
        if(temp % d == 0) return true;
        return false;
    }
};