#include<bits/stdc++.h>

using namespace std;


// class Solution
// {
//     public:
    //Function to sort a linked list of 0s, 1s and 2s.
    // Node* segregate(Node *head) {
        
        //Brute -->
        
    //   Node* temp = head;
       
    //   int cnt0 = 0;
    //   int cnt1 = 0;
    //   int cnt2 = 0;
       
    //   while(temp != NULL)
    //   {
    //       if(temp->data == 0){
    //           cnt0++;
    //       }
    //       else if(temp->data == 1){
    //           cnt1++;
    //       }
    //       else{
    //           cnt2++;
    //       }
    //       temp = temp->next;
    //   }
       
    //   temp = head;
       
    //   while(temp != NULL)
    //   {
    //       if(cnt0){
    //           temp->data = 0;
    //           cnt0--;
    //       }
    //       else if(cnt1){
    //           temp->data = 1;
    //           cnt1--;
    //       }
    //       else{
    //           temp->data = 2;
    //           cnt2--;
    //       }
           
    //       temp = temp->next;
    //   }
       
    //     return head;
    
    // }
// };
