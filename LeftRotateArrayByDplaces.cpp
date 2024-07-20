#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void Rotateleft(int arr[], int n, int k)
{
   k = k % n ;
  reverse(arr,arr+k);
  reverse(arr+k,arr+n);
  reverse(arr,arr+n);

}
int main()
{
   int n;
    cout<<"enter the size of array\n"<<endl;
    cin>>n;
    int arr[n];

    cout << "Enter  your array  \n";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the number of you want to rotate\n"<<endl;
    cin>>k;


  Rotateleft(arr, n, k);

  cout << "After Rotating the elements to right " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}