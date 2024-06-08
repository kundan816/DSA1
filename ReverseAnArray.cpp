// using 2 Pointer Approch
#include<iostream>
using namespace std;

void reverse(int l, int r, int arr[] , int n){
    if(l>=r)
        return ;
    swap(arr[l],arr[r]);
    reverse(l+1,r-1,arr,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,n-1,arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}