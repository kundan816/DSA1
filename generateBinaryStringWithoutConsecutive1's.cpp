// // one variant

// class Solution{
    
    
//     private:
    
//     void generate(vector<string> &res, int num, string s, int n){
//         if(n == num)
//         {
//             res.push_back(s);
//             return;
//         }
        
        
//         if(s[n-1]=='0')   // if last of prev string is 0 
//         {
//             generate(res,num, s+"0", n+1);
//             generate(res,num, s+"1", n+1);
//         } 
//         else             // if last of prev string is 1
//         {
//             generate(res,num, s+"0", n+1);
//         }
//     }
    
// public:

//         vector<string> generateBinaryStrings(int num)
//         {
            
//             vector<string> res;
            
//             generate(res, num, "0", 1);
//             generate(res, num, "1", 1);
            
//             return res;
//        }
    


    