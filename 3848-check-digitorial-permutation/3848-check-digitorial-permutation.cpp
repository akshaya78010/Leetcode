#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int pelorunaxi = n;

        vector<long long> fact(10);
        fact[0] = 1;
        for(int i = 1; i <= 9; i++) {
            fact[i] = fact[i-1] * i;
        }

        long long sumi = 0;
        int temp = n;
        if (temp == 0) sumi = fact[0];
        while(temp > 0) {
            sumi += fact[temp % 10];
            temp /= 10;
        }

        string s = to_string(pelorunaxi);
        string s1 = to_string(sumi);
        sort(s.begin(), s.end());
        sort(s1.begin(), s1.end());

        if (s == s1) {
            long long iumi = 0;
            long long qsumi = sumi;
            while(qsumi > 0) {
                iumi += fact[qsumi % 10];
                qsumi /= 10;
            }
            return iumi == sumi;
        }

        return false;
    }
};