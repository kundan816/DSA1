#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int ansIndex = 0;
        
        while(i < n){
            int j = i+1;
            while(j<n && chars[i] == chars[j]){
                j++ ;
            }
            // yaha kab aaoge
            // ya toh pura vector traverse kar liya
            // ya fir new / different character encounter kar liya

            // old character kop store kar lo
            chars[ansIndex++] = chars[i];

            int count = j-i ; 

            if(count > 1){
                // converting counting into single digit and saving it in answer
                string cnt = to_string(count);
                for(char ch : cnt){
                    chars[ansIndex++] = ch;
                }
            }

            i = j;
        }
        return ansIndex;
    }
};