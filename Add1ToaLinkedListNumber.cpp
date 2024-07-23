#include <bits/stdc++.h>
using namespace std;


// Brute


// class Solution
// {
//     Node* reverse(Node* head)
//     {
//         Node* temp = head;  
//         Node* prev = NULL; 

//         while(temp != NULL)
//         {  
//             Node* front = temp->next;  
                
//             temp->next = prev;  
                
//             prev = temp;  
//             temp = front; 
//         }
//             return prev;
//     }
//     public:
//     Node* addOne(Node *head) 
//     {
//         // Brute --> 
        
        
//         head = reverse(head);
        
//         Node* temp = head;
//         int carry = 1;
        
//         while(temp!=NULL)
//         {
//             temp->data = temp->data + carry;
            
//             if(temp->data < 10)
//             {
//                 carry = 0;
//                 break;
//             }
//             else
//             {
//                 temp->data = 0;
//                 carry =1;
//             }
//             temp= temp->next;
//         }
        
//         if(carry == 1)
//         {
//             Node* newNode = new Node(1);
            
//             head = reverse(head);
            
//             newNode->next = head;
//             return newNode;
//         }
//         // if carry remains 0
//         head = reverse(head);
//         return head;
        
        
//     }
// }




// Optimal



// class Solution
// {
    
    
//     int add(Node* temp){
//         // Base case
        
//         if(temp == NULL){
//             return 1;
//         }
        
//         // recursive call
//         int carry = add(temp->next);
        
//         temp->data = temp->data + carry;
        
//         if(temp->data < 10){
//             return 0;
//         }
        
//         temp->data = 0;
//         return 1;
        
        
//     }
//     public:
//     Node* addOne(Node *head) 
//     {
//         /
        
//         // Optimal-->     using recursion
        
//         int carry = add(head);
        
//         if(carry == 1){
//             Node* newNode = new Node(1);
//             newNode->next = head;
//             return newNode;
//         }
//         return head;
        
        
        
        
//     }
// };