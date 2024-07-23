// #include<bits/stdc++.h>
// using namespace std;


// class Solution
// {
// public:

//     Node * removeDuplicates(struct Node *head)
//     {
        
//         Node* temp = head;
        
//         while (temp != NULL)
//         {
//             Node* nextNode = temp->next;
            
//             while (nextNode != NULL && nextNode->data == temp->data)
//             {
//                 Node* duplicate = nextNode;
//                 nextNode = nextNode->next;
//                 free(duplicate);
//             }
            
//             temp->next = nextNode;
            
//             if (nextNode != NULL)
//             {
//                 nextNode->prev = temp;
//             }
            
//             temp = temp->next;
//         }
        
//         return head;
//     }
// };