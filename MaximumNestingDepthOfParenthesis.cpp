// using stack

// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int maxDepth(string s) {
//         stack<char> st;
//         int result = 0;

//         for(char &ch : s)
//         {
//             if(ch == '(')
//             {
//                 st.push(ch);
//             }
//             else if(ch == ')')
//             {
//                 st.pop();
//             }
//             result = max(result , (int)st.size());
//         }
//         return result;



//     }
// };


// Using variable 

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxDepth(string s) {
        
       
        int openbrackets = 0;
        int result = 0;

        for(char &ch : s)
        {
            if(ch == '(')
            {
                openbrackets++;
            }
            else if(ch == ')')
            {
                openbrackets--;
            }
            result = max(result ,  openbrackets);
        }
        return result;
    }
};