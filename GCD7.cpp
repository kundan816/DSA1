#include<iostream>
using namespace std;

int main() {

	// int a,b;
	// cin>>a>>b;

    // for(int i=min(a,b);i>=1;i--){
    //         if(a%i==0 && b%i==0){
    //             cout<<i<<endl;
    //             break;

    // }
  // }


   int a,b;
   cin>>a>>b;

   while(a > 0 && b > 0){
    if(a > b){
        a = a % b;
    }
    else{
        b = b % a;
    }

   }
   if(a == 0){
    cout<<b<<endl;
   }
   else{
    cout<<a<<endl;
   }

	return 0;


}