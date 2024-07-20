// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     void deleteAllOccurOfX(struct Node** head_ref, int x) {
        
//         struct Node* curr = *head_ref;
        
//         while(curr)
//         {
//             if(curr->data == x)
//             {
//                 if(curr-> prev != NULL)
//                 {
//                     curr->prev->next = curr->next;
//                 }
//                 else
//                 {
//                     *head_ref = curr->next;    //if we have to delete head
//                 }
                
//                 if(curr -> next != NULL)
//                 {
//                     curr->next->prev = curr->prev;
//                 }
//             }
            
//             curr = curr->next;
//         }
//     }
// };
