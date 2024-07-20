//Parametrized 

// #include<iostream>
// using namespace std;

// void add(int i, int sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }
//     add(i-1,sum+i);
// }
// int main(){
//     int n;
//     cin>>n;
//     add(n,0);
// }

// functional

#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);  
}