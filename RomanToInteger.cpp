
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char , int> mp1{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };

        int result = 0;
        for(int i = 0 ;  i< s.size() ; i++)
        {
            if(mp1[s[i]] < mp1[s[i+1]])
            {
                result -= mp1[s[i]];
            }
            else{
                result += mp1[s[i]];
            }
        }
        return result ; 
    }
};