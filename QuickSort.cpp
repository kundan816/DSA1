#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main() {
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    
    int arr[n];
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Given array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high - 1 && arr[i] <= pivot) {
            i++;
        }
        while (j >= low + 1 && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
