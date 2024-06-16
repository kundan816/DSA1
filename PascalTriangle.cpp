// type1 -->




// int nCr(int n, int r) {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++) {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }




// type 2 -->


// Brute -->

// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r) {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++) {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// void pascalTriangle(int n) {
//     // printing the entire row n:
//     for (int c = 1; c <= n; c++) {

//         cout << nCr(n - 1, c - 1) << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }

// optimal  -->



// #include <bits/stdc++.h>
// using namespace std;

// void pascalTriangle(int n) {
//     long long ans = 1;
//     cout << ans << " "; // printing 1st element

//     //Printing the rest of the part:
//     for (int i = 1; i < n; i++) {
//         ans = ans * (n - i);
//         ans = ans / i;
//         cout << ans << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }




// type3 -->


#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back( 1 ); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}



