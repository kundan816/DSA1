#include<bits/stdc++.h>
using namespace std;

bool func(int i , string &s) 
{
    if(i>=s.size()/2){
        return true;
    }

    if(s[i] != s[s.size() - i - 1]){
        return false;
    }

    return func(i+1,s);

}

int main(){

    string S = "madam";
    cout<<func(0,S)<<endl;

    return 0;
}


// valid palindome 


/*

class Solution {
private:
    bool valid(char ch) 
    {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }


    
    char toLowerCase(char ch)
     {
        if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
            return ch;
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }



    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) 
    {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
};
*/ 