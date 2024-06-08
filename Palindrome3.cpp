#include<iostream>
using namespace std;

int main() {
	int rev = 0;
	int n;
	cin>>n;
    int original = n;
	while(n>0){
		int lastdigit = n%10;
		n=n/10;
		rev = rev * 10 + lastdigit;
	}
    if(original == rev){
        cout<<" Palindrome ";
    }
    else{
        cout<<" Not a Palindrome ";
    }


}
