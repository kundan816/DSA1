#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int count = 0;
        string ans = "";
        
        for(int i = 0; i < n ; i++)
        {
            if(s[i] =='(')
            {
                if(count > 0)
                {
                    ans.push_back(s[i]);               
                }
                 count++;
            }

            else
            {
                count --;
                if(count > 0)
                {
                    ans.push_back(s[i]);
                }
            }
        }

        return ans;
    }
};