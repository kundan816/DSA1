// Brute -->



// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int result = INT_MIN;
//     for(int i=0;i<nums.size();i++) 
//     {
//         for(int j=i;j<nums.size();j++) 
//         {
//             int prod = 1;
//             for(int k=i;k<=j;k++) 
//                 prod *= nums[k];
//             result = max(result,prod);    
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {1,2,-3,0,-4,-5};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }





// Better -->





#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) 
{
    int result = INT_MIN;
    for(int i=0;i<nums.size();i++) 
    {
        int p = 1;
        for(int j=i;j<nums.size();j++) 
        {
         
           p *= nums[j];
        }
        result = max(result,p);
    }
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}



