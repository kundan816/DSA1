// brute

// #include<bits/stdc++.h>
// using namespace std;

//  ListNode* oddEvenList(ListNode* head) {

//         // Brute 

//     if(head==NULL || head->next==NULL){
//         return head;
//      }

//     vector<int> v;

//     ListNode* temp= head;   //for odd

//     while(temp!=NULL && temp->next!=NULL)
//     {
//         v.push_back(temp->val);
//         temp= temp->next->next;
//      }
//     if(temp){        // handles in case of odd no of elements if odd is pointing at last 
//         v.push_back(temp->val);
//      }


//     temp = head->next;      //for even

//     while(temp!=NULL && temp->next!=NULL)
//     {
//         v.push_back(temp->val);
//         temp= temp->next->next;
//      }
//     if(temp){         // handles in case of even no of elements if even is pointing at last 
//         v.push_back(temp->val);
//      }

//     temp= head;         // for putting from v to originl list
        
//     for(int i=0; i<v.size(); i++)
//     {
//         temp->val= v[i];
//         temp= temp->next;
//    }
        
//     return head;
//  }
