// // brute  --> wrong


// #include<bits/stdc++.h>
// using namespace std;

// int maxLen(int A[], int n) {
//     int result = INT_MIN;
//     for(int i=0;i<n;i++) 
//     {
//         for(int j=i;j<n;j++) 
//         {
//             int sum = 0;
//             for(int k=i;k<=j;k++) {
//                 sum += A[k];
//                 if(sum == 0){
//                  result = max(result,j-i+1);  
//                 }            
                    
                
                
//             }
               
           
//         }
//     }
//     return result;
// }
// int main() {
//     int nums[] = {1,-1,3,2,-2,-8,1,7,10,23};
//     cout<<"The maximum product subarray with sum is zero: "<<maxLen(nums,10);
//     return 0;
// }



// optimal  -->



#include<bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int> mpp; 
    int maxi = 0;
    int sum = 0; 
    for(int i = 0;i<n;i++) 
    {
        sum += A[i]; 
        if(sum == 0) 
        {
            maxi = i + 1; 
        }
        else {
            if(mpp.find(sum) != mpp.end()) 
            {
                maxi = max(maxi, i - mpp[sum]);   //update maaxi subtracting index
            }
            else {
                mpp[sum] = i;   //store in hashmap
            }
        }   
    }

    return maxi; 
}

int main() {
    int nums[] = {1, 2, -2, 4, -4};
    cout<<"The maximum product subarray with sum is zero: "<<maxLen(nums,5);
    return 0;
}




