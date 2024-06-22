// Brute -->

#include<bits/stdc++.h>

using namespace std;

pair<int, int> firstAndLastOccurence(int n, int key, vector < int > & arr) {
  int first = -1 ;
  int last = -1;
  for (int i= 0 ; i< n ; i++) 
  {
    if (arr[i] == key) 
    {
        if(first == -1)
        {
            first = i;
           
        }
         last = i;
    }
  }
  return {first,last};
}

int main() {
  int n = 7;
  int key = 13;
  vector < int > arr = {3,4,13,13,13,20,40};

   pair<int, int> ans = firstAndLastOccurence(n, key, arr);

  cout << "The first and last occurence are: " << ans.first
	     << " " << ans.second << endl;

  return 0;
}