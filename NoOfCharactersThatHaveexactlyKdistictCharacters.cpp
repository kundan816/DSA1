#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    long long int substrCount (string s, int k) 
    {
    
    	return atmost(s,k) - atmost(s,k-1);
    }
    
    long long int atmost(string s , int k)
    {
        int arr[26] = {0};
        int distinct = 0 , left = 0;
        long long result = 0;
        
        for(int i = 0; i<s.length();i++)
        {
            arr[s[i] - 'a']++;
            
            if(arr[s[i]-'a'] == 1)
            {
                distinct ++;
                
            }
            
            while(distinct > k)
            
            {
                arr[s[left] - 'a']--;
                if(arr[s[left] - 'a'] == 0)
                {
                    distinct --;
                }
                left++;
            }
            
            result = result + (i-left+1);
        
            
        }
        return result;
    }
};