#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        int i = 0;
        int sign = 1;

        int max = INT_MAX;
        int min = INT_MIN;
        
        if (s.length() == 0) {
            return 0;
        }
        
        // Remove leading whitespaces
        while (i < s.length() && s[i] == ' ') 
        {
            i++;
        }
        
        // Check for sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) 
        {
            if (s[i] == '-') 
            {
                sign = -1;
            }
            i++;
        }
        
        // Convert digits to integer
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') 
        {
            int digit = s[i] - '0';
            // handling overflow condition
            if (ans > max / 10 || (ans == max / 10 && digit > max % 10)) 
            {
                return (sign == 1) ? max : min;
            }
            ans = ans * 10 + digit;
            i++;
        }
        
        return ans * sign;
    }
};