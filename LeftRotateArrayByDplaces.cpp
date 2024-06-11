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
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;

  Rotateleft(arr, n, k);

  cout << "After Rotating the elements to right " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}