// #include<bits/stdc++.h>

// using namespace std;



// Brute 

// Node *flatten(Node *root) {
    
    
//     // using array  -->
    
//     Node *temp = root;
//     vector<int> arr;
    
//     while(temp)
//     {
        
//         arr.push_back(temp->data);
        
//         Node *child = temp->bottom;
        
//         while(child)
//         {
//             arr.push_back(child->data);
//             child = child->bottom;
//         }
//         temp = temp->next;
        
//     }
    
//     sort(arr.begin(), arr.end());
    

//     Node* head = new Node(arr[0]);
//     Node* mover = head;
    
//     for(int i=1; i<arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         mover->bottom = temp;
//         mover = temp;
//     }
    
//     return head;
    
// }








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