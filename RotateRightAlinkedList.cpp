#include<bits/stdc++.h>
using namespace std;


// class Solution {
//     ListNode* getNewLastNode(ListNode* temp , int k){
//         int cnt = 1;
//         while(temp != NULL)
//         {
//             if(cnt == k)
//             {
//                 return temp;
//             }
//             cnt++;
//             temp =temp->next;
//         }
//         return temp;
//     }
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head == NULL || k ==0)
//         {
//             return head;
//         }

//         ListNode* tail = head;
//         int len =1;

//         while(tail ->next != NULL){
//             tail = tail ->next;
//             len++;
//         }

//         // we got length of list
//         if(k % len == 0){        //no rotation
//             return head;
//         }
//         k = k % len;

//         // attach tail to head of list

//         tail->next = head;

//         ListNode* newLastNode = getNewLastNode(head , len-k);

//         head = newLastNode->next;

//         newLastNode->next = NULL;

//         return head;
//     }
// };