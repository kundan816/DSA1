#include<iostream>
using namespace std;


int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}


int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}





// gfg question


// A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
// Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.



// class Solution
// {
// public:
//     vector<long long> factorialNumbers(long long N)
//     {
        
//       vector<long long>ans;
//       long long fact = 1;
    
//       for(int i=1;i<=N;i++)
//       {
//           fact = fact*i;
          
//           if(fact<=N){
//               ans.push_back(fact);
//             }
            
//           else{
//                   break;
//               }
//         }
//       return ans;
//     }
// };