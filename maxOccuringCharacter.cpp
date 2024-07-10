#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        
        for(int i = 0 ; i<str.length() ; i++ )
        {
            char ch = str[i];
            
            int number = 0 ; 
            
            if(ch >= 'a' && ch <= 'z')
            {
                number = ch - 'a' ;
            }
            
            arr[number]++;
        }
        
        int maxi = -1;
        int ans = 0;
        
        for(int i = 0 ; i <26 ; i++)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
                ans  = i ;
            }
             
        }
        
        char finalans = 'a' + ans;
        return finalans;
    }

};