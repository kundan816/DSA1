#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int largest = arr[0];
  for (int i = 1 ; i < n; i++)
   {
    if (arr[i] > largest)
     {
      largest = arr[i];
     }
  }
  return largest;
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


  int largest = findLargestElement(arr, n);
  cout << "The largest element in the array is: " << largest<< endl;
 
  return 0;
}