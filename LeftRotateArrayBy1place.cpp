
#include<bits/stdc++.h>

using namespace std;


void solve(int arr[], int n) {
  int temp = arr[0]; // storing the first element of array in a variable

   // shifting
  for (int i = 1; i < n; i++)
   {
    arr[i-1] = arr[i];
  }

  arr[n - 1] = temp; // assigned the value of variable at the last index

  for (int i = 0; i < n; i++) 
  {
    cout << arr[i] << " ";
  }

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
  solve(arr, n);
}