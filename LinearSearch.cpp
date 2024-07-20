#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       for(int i=0;i<N;i++){
           if(arr[i] == K){
               return 1;
           }
       }   
       return -1;

    }

    int main(){
        int N;
        cin>>N;
        int arr[N];

        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }

        int K;
        cout<<"enter the number to be searched"<<endl;
        cin>>K;
        
        cout<<searchInSorted(arr,N,K)<<endl;
        return 0;
        
    }