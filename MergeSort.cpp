#include<bits/stdc++.h>
#include<vector>

using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Merge the two subarrays
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
         {
            temp.push_back(arr[left]);
            left++;
        } 
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements of left subarray if any
    while (left <= mid) 
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements of right subarray if any
    while (right <= high) 
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the merged elements back into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high) {
    
        if(low==high){
            return;
        }
        
        // Calculate the middle point
        int mid = low + (high - low) / 2;  

        // Sort first and second halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    
}

int main() {
    int n;
    cout<<"enter the size of array\n"<<endl;
    cin>>n;
    int arr[n];

    cout << "Enter  your array  \n";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    cout << "Given array is \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    mergeSort(arr, 0, n-1);

    cout << "\nSorted array is \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
