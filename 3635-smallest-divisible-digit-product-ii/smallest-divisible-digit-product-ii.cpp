class Solution {
public:
    typedef long long ll;

    bool isValid(long long t) {
        while(true) {
            if(t%2 == 0) t = t/2;
            else if(t%3 == 0) t = t/3;
            else if(t%5 == 0) t = t/5;
            else if(t%7 == 0) t = t/7;
            else break;
        }
        if(t == 1) return true;
        return false;
    }

    string allocation(long long value, int length) {
        string ans = "";
        for(int digit = 9; digit > 1; digit--) {
            while(value % digit == 0) {
                ans.push_back(digit + '0');
                value /= digit;
            }
        }
        while(ans.size() < length) {
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string smallestNumber(string num, long long t) {
        
        if(isValid(t) == false) return "-1";
        int n = num.length();

        vector<ll> remainFactor(n+1, t);
        for(int i = 0; i < n; i++) {
            int digit = num[i] - '0';
            if(digit == 0) break; 
            remainFactor[i+1] = remainFactor[i] / gcd (remainFactor[i], (ll)digit);
        }

        if(remainFactor[n] == 1) return num;

        int idx = n-1;
        int zeroPos = num.find('0');
        if(zeroPos != -1) idx = zeroPos;

        for(int i = idx; i >= 0; i--) {
            ll required = remainFactor[i];
            int freeSlots = n - 1 - i;

            for(int digit = (num[i]-'0')+1; digit <= 9; digit++) {
                ll furtherRequired = required / gcd(required,digit);
                string reqNum = allocation(furtherRequired, freeSlots);

                if(reqNum.length() == freeSlots) {
                    return num.substr(0,i) + char(digit + '0') + reqNum;
                }
            }
        }

        return allocation(t, n+1);
    }
};