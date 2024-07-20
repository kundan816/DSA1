#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1; // Second largest doesn't exist if there are less than 2 elements
    }

    int largest = arr[0];
    int slargest = -1;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > largest)
         {
            slargest = largest; // Update slargest before updating largest
            largest = arr[i];
        }
         else if (arr[i] < largest && arr[i] > slargest)
         {
            slargest = arr[i];
        }
    }

    return slargest;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest == -1) 
    {
        cout << "There is no second largest element." << endl;
    } 
    else
    {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
