// Brute  -->





#include <bits/stdc++.h>
using namespace std;

// Power exponential method:
long long func(int b, int e) {
    long long  ans = 1;
    while (e > 0) 
    {
        if (e % 2 == 1) {
            e--;
            ans = ans * b;
        }
        else {
            e /= 2;
            b = b* b;
        }
    }
    return ans;
}

int NthRoot(int n, int m) {
    //Use linear search on the answer space:
    for (int i = 1; i <= m; i++) {
        long long val = func(i, n);
        if (val == m * 1ll) return i;
        else if (val > m * 1ll) break;
    }
    return -1;
}

int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

