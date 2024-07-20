// brutte

#include<bits/stdc++.h>
using namespace std;

// class Solution {
   
//  public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

//     // Brute -->


//     // unordered_set<ListNode*> set;

//     // while(headA != NULL) 
//     // {
//     //    set.insert(headA);
//     //    headA = headA->next;
//     // }

//     // while(headB != NULL) 
//     // {
//     //     if(set.find(headB) != set.end()) 
//     //         return headB;
//     //     headB = headB->next;
//     // }

//     // return NULL;


//     }
// };


// Better 


// class Solution {
    // private: 
        
    //     ListNode* collision(ListNode* t1 , ListNode* t2 , int diff){
    //         while(diff)
    //         {
    //             diff--;
    //             t2 = t2->next;
    //         }

    //         while(t1 != t2)
    //         {
    //             t1 = t1->next;
    //             t2 = t2 ->next;
    //         }

    //         return t1;
    //     }

//  public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

   


    // Better-->

    // ListNode* temp1  = headA;
    // int cnt1 = 0;
    // while(temp1 != NULL){
    //     cnt1++;
    //     temp1 = temp1->next;
    // } 

    // ListNode* temp2  = headB;
    // int cnt2 = 0;
    // while(temp2 != NULL){
    //     cnt2++;
    //     temp2 = temp2->next;
    // } 
     
    // // Reset temp1 and temp2 to the head of the lists
    // temp1 = headA;
    // temp2 = headB;


    //  if(cnt1<cnt2){
    //     return collision(temp1,temp2,cnt2-cnt1);   //if cnt1 is  smaller than  cnt2
    //  }
    //  else{
    //     return collision(temp2 , temp1 , cnt1-cnt2);  //if cnt2 is smaller than cnt1
    //  }

   

//     }
// };





// Optimal



//  public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    

//     // Optimal

//     if(headA == NULL || headB == NULL){
//         return  NULL;
//     }

//     ListNode* t1 = headA;
//     ListNode* t2 = headB;

//     while(t1 != t2){
//         t1 = t1->next;
//         t2 = t2->next;

//         if(t1 == t2){
//             return t1;
//         }

//         if(t1 == NULL){
//             t1 = headB;
//         }
//         if(t2 == NULL){
//             t2 = headA;
//         }
//     }
//     return t1;


//     }
// };



