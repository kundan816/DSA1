#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n)
 {
  for (int i = 1; i < n; i++) 
  {
    if (arr[i] < arr[i - 1])
    {
        return false;
    }
  }

  return true;
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

  isSorted(arr,n);

  if(isSorted(arr,n)==true){
        cout<<"array is sorted\n";
    }
    else{
        cout<<"array is not sorted\n";
    }
    
}