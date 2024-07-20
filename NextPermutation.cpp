// brute -->

// step 1: Find all possible permutations of elements present and store them. (using recursion)
// Step 2: Search input from all possible permutations.
// Step 3: Print the next permutation present right after it.


// better  --> using stl library in-built function   -->   next_permutation(A.begin(), A.end())



// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main() {
//     int arr[] = {1,3,2};
    
//     next_permutation(arr,arr+3);//using in-built function of C++
    
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
//     return 0;
// }




// optimal  -->


// step-1  -->   Find the break-point, i: Break-point means the first index i from the back of the given array where arr[i] becomes smaller than arr[i+1].

// step-2  -->   If such a break-point does not exist i.e. if the array is sorted in decreasing order, the given permutation is the last one in the sorted order of all possible permutations. So, the next permutation must be the first i.e. the permutation in increasing order. So, in this case, we will reverse the whole array and will return it as our answer.

// step-3  -->   If a break-point exists:
// Find the smallest number i.e. > arr[i] and in the right half of index i(i.e. from index i+1 to n-1) and swap it with arr[i]. 
//Reverse the entire right half(i.e. from index i+1 to n-1) of index i. And finally, return the array.



#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    int n = A.size(); // size of the array.

    // Step 1: Find the break point:

    int index = -1; // break point
    for (int i = n - 2; i >= 0; i--) 
    {
        if (A[i] < A[i + 1]) {
            // index i is the break point
            index = i;
            break;
        }
    }

    // If break point does not exist:
    
    if (index == -1) {
        // reverse the whole array: 
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = n - 1; i > index; i--) {
        if (A[i] > A[index]) {
            swap(A[i], A[index]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + index + 1, A.end());

    return A;
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}

