#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        // reverse whole string
        reverse(s.begin() , s.end());

        int i = 0;
        int l =0 , r = 0;

        int n = s.length();

        while(i < n)
        {
            while(i < n && s[i] != ' ')   // i ko agar char dikkha  to r ko dega aur i ur r dono aage bdh jaaynge 
            {
                s[r] = s[i];
                r++; 
                i++;
            } 
            // i ko space dikh gy  and l and r at different index so reverse from  l to r
            if(l < r){
                reverse(s.begin()+l , s.begin()+r);

                s[r] = ' ';  //word khtm hone k baad  ek space chhahiye
                r++ ;

                l = r;   // l ko r k paas le aao next word start hoga ab
            }

            i++ ;   //i ko space dikh gy but i and r same index pe hai so i ko aage badhao

        }

        s = s.substr(0 , r-1);
        return s; 
    }
};