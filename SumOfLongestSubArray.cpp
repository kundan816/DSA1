// Brute  -->


// #include <bits/stdc++.h>
// using namespace std;

// int maxSubarraySum(int arr[], int n) {
//     int maxi = INT_MIN; // maximum sum

//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = i; j < n; j++)
//          {
            
//             int sum = 0;

//             //add all the elements of subarray:
//             for (int k = i; k <= j; k++) 
//             {
//                 sum += arr[k];
//             }

//             maxi = max(maxi, sum);
//         }
//     }

//     return maxi;
// }

// int main()
// {
//     int arr[] = { -2,-3,4,-1,-2,1,5,-3};
//     int n = 8;

//     int maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }




// Better -->





// #include <bits/stdc++.h>
// using namespace std;

// int maxSubarraySum(int arr[], int n) {
//     int maxi = INT_MIN; // maximum sum

//     for (int i = 0; i < n; i++)
//      {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//          {
//             sum += arr[j];

//             maxi = max(maxi, sum); // getting the maximum
//         }
//     }

//     return maxi;
// }

// int main()
// {
//     int arr[] =  { -2,-3,4,-1,-2,1,5,-3};
//     int n = 8;
//     int maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }




// optimal approach -->   Kadane's algorithm 




#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxi) 
        {
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) 
        {
            sum = 0;
        }
    }

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) 
        // maxi = 0;

    return maxi;
}

int main()
{
    int arr[] =  { -2,-3,4,-1,-2,1,5,-3};
    int n = 8;

    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}


// follow up questio --> 

// printing the sum of longest subarray


