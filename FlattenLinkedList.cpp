// #include<bits/stdc++.h>

// using namespace std;

// // optimal
    
// Node *merge2LL(Node *l1, Node *l2){
    
//     Node* dummy = new Node(-1);
//     Node* temp = dummy;
    
//     while(l1!=NULL && l2 !=NULL)
//     {
        
//         if(l1->data < l2->data)
//         {
            
//             temp->bottom = l1;
//             l1->next = NULL;
//             temp = temp->bottom;
//             l1 = l1->bottom;
        
//         }
//         else
//         {
//             temp->bottom = l2;
//             l2->next = NULL;
//             temp = temp->bottom;
//             l2 = l2->bottom;
            
//         }
        
//     }
    
//     if(l1!=NULL) 
//     {
//         temp->bottom = l1;
//     }
//     if(l2!=NULL) 
//     {
//         temp->bottom = l2;
//     }
    
//     if(dummy->bottom!=NULL) 
//     {
//         dummy->bottom->next = NULL;
//     }
    
//     return dummy->bottom;
    
// }
// Node *flatten(Node *root) {
//      if(!root || !root->next) 
//         return root;
        
//     Node *curr = flatten(root->next);
    
//     return merge2LL(root, curr);
// }