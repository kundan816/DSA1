#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int ans  = 0;
        for(int i = 0; i<s.size() ; i++)
        {
            vector<int> v(26,0);
            for(int j = i; j<s.size();j++)
            {
                v[s[j]-'a']++;

                int maxi = 0,mini = 1000;
                for(int k = 0; k< 26 ;k++)
                {
                    if(v[k])
                    {
                        maxi = max(maxi , v[k]);
                        mini = min(mini , v[k]);
                    }
                }
                ans += maxi - mini;
            }
        }
        return ans;
    }
};