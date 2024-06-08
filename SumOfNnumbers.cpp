#include<iostream>
using namespace std;

void add(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    add(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    add(n,0);
}