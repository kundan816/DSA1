// method 1-->


// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }   

//     // PreCompute
//     int hash[13]={0};
//     for(int i=0; i<n; i++){
//         hash[arr[i]]+=1;
//     }

//     // queries
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;

//         // fetch
//         cout<<hash[number]<<endl;

//     }
//     return 0;
// }


// method2 --> using map or unordered_map


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   

    // PreCompute
    map<int,int> mpp;
    // unordered_map<int,int> mpp;    this can also be used
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }


    // queries
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        // fetch
        cout<< mpp[number] <<endl;

    }
    
    // printing content of map
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}

