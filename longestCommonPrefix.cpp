
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Approach1 



        // string ans = "";

        // for(int i = 0 ; i < strs[0].length(); i++)
        // {
        //     for(int j = 0; j < strs.size() - 1 ; j++)
        //     {
        //         if(strs[j][i] != strs[j+1][i])
        //         {
        //             return ans;
        //         }
        //     }
        //     ans += strs[0][i] ;
        // }
        // return ans ;


        // approach2.
        
        string ans = "";
        sort(strs.begin() , strs.end());
        int i = 0;
        while(i < strs[0].length() && strs[0][i] == strs[strs.size() - 1][i]){
            ans += strs[0][i];
            i++;
        }
        return ans;
    }
};