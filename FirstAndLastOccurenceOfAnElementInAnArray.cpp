// Brute -->

// #include<bits/stdc++.h>

// using namespace std;

// pair<int, int> firstAndLastOccurence(int n, int key, vector < int > & arr) {
//   int first = -1 ;
//   int last = -1;
//   for (int i= 0 ; i< n ; i++) 
//   {
//     if (arr[i] == key) 
//     {
//         if(first == -1)
//         {
//             first = i;
           
//         }
//          last = i;
//     }
//   }
//   return {first,last};
// }

// int main() {
//   int n = 7;
//   int key = 13;
//   vector < int > arr = {3,4,13,13,13,20,40};

//    pair<int, int> ans = firstAndLastOccurence(n, key, arr);

//   cout << "The first and last occurence are: " << ans.first
// 	     << " " << ans.second << endl;

//   return 0;
// }




// using lower and upper bound concept -->


#include<bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) 
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) 
        {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}


int upperBound(vector<int> &arr, int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) 
        {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

pair<int, int> firstAndLastOccurence(vector < int > & arr , int n, int key){
    int lb = lowerBound(arr , n , key );

    if(lb == n || arr[lb] != key){
        return {-1, -1};
    }

    int ub = upperBound(arr , n , key );
    
    return {lb, ub-1};
}


int main() {
    
  int n = 7;
  int key = 13;
  vector < int > arr = {3,4,13,13,13,20,40};

  pair<int, int> ans = firstAndLastOccurence(arr ,n, key);

  cout << "The first and last occurence are: " << ans.first
	     << " " << ans.second << endl;

  return 0;
}