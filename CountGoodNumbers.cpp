

// class Solution {
//     int MOD = 1e9 + 7;

//     long long myPow(long long x, long long n) {
//         long long ans = 1;

//         while (n > 0) 
//         {
//             if (n % 2 == 1)   // If n is odd
//             {
//                 ans = (ans * x) % MOD;
//                 n = n-1;
//             }
//             else
//             {
//                 x = (x * x) % MOD;  // Square the base
//                 n /= 2;             // Divide the exponent by 2
//             }
            
//         }
//         return ans;
//     }

// public:
//     int countGoodNumbers(long long n) {
//         long long odd = n / 2;
//         long long even =  n / 2 + (n % 2); 
//         return (myPow(5, even) * myPow(4, odd)) % MOD;
//     }
// };
