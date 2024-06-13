// brute


// #include<bits/stdc++.h>
// using namespace std;

// int maxProfit(vector<int> &arr) {
//     int maxProfit = 0;
//     int n = arr.size();

//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = i + 1; j < n; j++) 
//         {
//             if (arr[j] > arr[i]) 
//             {
//                 int profit = arr[j] - arr[i];
//                 maxProfit = max(profit, maxProfit);
//             }
//         }
//         }

//     return maxProfit;
// }

// int main() {
//     vector<int> arr = {7,1,5,3,6,4};
//     int maxPro = maxProfit(arr);
//     cout << "Max profit is: " << maxPro << endl;
// }


// optimal



#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxProfit = 0;
    
    int mini = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        // find profit
        int profit = arr[i] - mini;
        // update profit
        maxProfit = max(maxProfit, profit);
        // update mini
        mini = min(mini, arr[i]);
    }
    
    return maxProfit;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}



