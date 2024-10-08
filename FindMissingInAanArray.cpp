


#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    // optimal1 --> using sum

    //Summation of first N numbers:
    // int sum = (N * (N + 1)) / 2;

    // //Summation of all array elements:
    // int s2 = 0;
    // for (int i = 0; i < N - 1; i++) {
    //     s2 += a[i];
    // }

    // int missingNum = sum - s2;
    // return missingNum;


    // OPTIMAL 2-> using xor

     int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

