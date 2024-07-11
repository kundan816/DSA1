// Better 


// #include <iostream>
// #include <algorithm>
// using namespace std;
// bool CheckAnagrams(string str1, string str2)
// {
//   // Case 1: when both of the strings have different lengths
//   if (str1.length() != str2.length())
//     return false;
 
//   sort(str1.begin(), str1.end());
//   sort(str2.begin(), str2.end());
 
//   // Case 2: check if every character of str1 and str2 matches with each other
//   for (int i = 0; i < str1.length(); i++)
//   {
//     if (str1[i] != str2[i])
//       return false;
//   }
//   return true;
// }
// int main()
// {
//   string Str1 = "INTEGER";
//   string Str2 = "TEGERNI";
//   if(CheckAnagrams(Str1, Str2))
//   cout << "True" << endl;
//   else
//   cout<<"False"<<endl;
//   return 0;
// }



// optimal -->



#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
  // when both of the strings have different lengths
  if (str1.length() != str2.length())
    return false;
 
  int freq[26] = {0};
  for (int i = 0; i < str1.length(); i++)
  {
    freq[str1[i] - 'a']++;
  }
  for (int i = 0; i < str2.length(); i++)
  {
    freq[str2[i] - 'a']--;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] != 0)
      return false;
  }
  return true;
}
int main()
{
  string Str1 = "rat";
  string Str2 = "car";
  if(CheckAnagrams(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
}