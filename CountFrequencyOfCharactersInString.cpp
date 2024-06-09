// method1 -->

// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;

//     // PreCompute
//     int hash[26]={0};
//     for(int i=0; i<s.size(); i++){
//         hash[s[i]-'a']++;
//     }

//     // queries
//     int q;
//     cin>>q;
//     while(q--){
//        char c;
//        cin>>c;

//         // fetch
//         cout<<hash[c-'a']<<endl;

//     }
//     return 0;
// }



// nethod 2-->

#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    // PreCompute
    int hash[256]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    // queries
    int q;
    cin>>q;
    while(q--){
       char c;
       cin>>c;

        // fetch
        cout<<hash[c]<<endl;

    }
    return 0;
}