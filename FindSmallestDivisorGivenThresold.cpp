// Brute -->




// #include <bits/stdc++.h>
// using namespace std;



// int findMax(vector<int> &v) {
//     int maxi = INT_MIN;
//     int n = v.size();
//     //find the maximum:
//     for (int i = 0; i < n; i++) {
//         maxi = max(maxi, v[i]);
//     }
//     return maxi;
// }


// int smallestDivisor(vector<int>& arr, int limit) {
//     int n = arr.size();
    
//     int maxi = findMax(arr);

//     //Find the smallest divisor:
//     for (int d = 1; d <= maxi; d++) {
//         //Find the summation result:
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += ceil((double)(arr[i]) / (double)(d));
//         }
//         if (sum <= limit)
//             return d;
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int limit = 8;
//     int ans = smallestDivisor(arr, limit);
//     cout << "The minimum divisor is: " << ans << "\n";
//     return 0;
// }




// Optimal -->







#include <bits/stdc++.h>
using namespace std;

 
int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}


int sumByD(vector<int> &arr, int div) {
    int n = arr.size(); 

    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int limit) {
    int n = arr.size();

    if (n > limit) 
        return -1;

    int low = 1, high = findMax(arr);

    //Apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (sumByD(arr, mid) <= limit) 
        {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}




