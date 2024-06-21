// // brute


// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int result = INT_MIN;
//     for(int i=0;i<nums.size();i++) 
//     {
//         for(int j=i;j<nums.size();j++) 
//         {
//             int sum = 0;
//             for(int k=i;k<=j;k++) {
//                 sum += nums[k];
//                 if(sum == 0){
//                  result = max(result,j-i+1);  
//                 }            
                    
                
                
//             }
               
           
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {1,-1,3,2,-2,-8,1,7,10,23};
//     cout<<"The maximum product subarray with sum is zero: "<<maxProductSubArray(nums);
//     return 0;
// }

// optimal  -->




int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int> mpp; 
    int maxi = 0;
    int sum = 0; 
    for(int i = 0;i<n;i++) {
        sum += A[i]; 
        if(sum == 0) {
            maxi = i + 1; 
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]); 
            }
            else {
                mpp[sum] = i;
            }
        }   
    }

    return maxi; 
}



