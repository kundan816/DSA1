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





    
    // Optimal -->
    
        //    if(head==NULL || head->next==NULL) {
        //         return head;
        //    }
        
        //    Node* zerohead=new Node(-1);
        //    Node* Onehead=new Node(-1);
        //    Node* Twohead=new Node(-1);
           
        //    Node* zero=zerohead;
        //    Node* one=Onehead;
        //    Node* two=Twohead;
           
        //    Node* temp = head;
           
        //    while(temp!=NULL)
        //    {
        //        if(temp->data==0)
        //        {
        //            zero->next=temp;
        //            zero=zero->next;
        //        }
        //        if(temp->data==1)
        //        {
        //            one->next=temp;
        //            one=one->next;
        //        }
        //        if(temp->data==2)
        //        {
        //            two->next=temp;
        //            two=two->next;
        //        }
        //        temp=temp->next;
        //    }
        //    zero->next= (Onehead->next) ? (Onehead->next) : (Twohead->next);
        //    one->next=Twohead->next;
        //    two->next=NULL;
           
        //    delete zerohead;
        //    delete Onehead;
        //    delete Twohead;
           
        //    return zerohead->next;
    

    
    // }
// };


