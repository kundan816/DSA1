#include<bits/stdc++.h>
using namespace std;

void countDigits(int n){
	int cnt = 0;
	while(n > 0){
		int lastdigit = n % 10;
		cnt++;
		n = n/10;
	}
	cout<<cnt<<endl;

}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    countDigits(n);
    return 0;
}