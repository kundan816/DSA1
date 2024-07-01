// brute -->


// #include <bits/stdc++.h>
// using namespace std;

// int upperBound(vector<int> &arr, int x, int n) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > x) {
//             // upper bound found:
//             return i;
//         }
//     }
//     return n;
// }

// int main()
// {
//     vector<int> arr = {3, 5, 8, 9, 15, 19};
//     int n = 6, x = 9;
//     int ind = upperBound(arr, x, n);
//     cout << "The upper bound is the index: " << ind << "\n";
//     return 0;
// }



// Optimal -->


#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // may be  an  answer
        if (arr[mid] > x) 
        {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else 
        {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index : " << ind << "\n";
    return 0;
}

