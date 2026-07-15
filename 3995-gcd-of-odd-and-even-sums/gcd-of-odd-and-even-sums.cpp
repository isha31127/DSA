class Solution {
public:
    int gcd(int a,int b){
        while (b != 0){
            int r = b;
            b = a % b;
            a = r;
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int oddSum = n * n;
        int evenSum = n * n + n;
        return gcd(oddSum,evenSum);
    }
};