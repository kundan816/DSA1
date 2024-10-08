// Better(iterative)



// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//     public:
//         Node(int data1 , Node* next1){
//             data =data1;
//             next = next1;
//         }
//     public:
//         Node(int data1){
//             data = data1;
//             next = nullptr;
//         }

// };

// Node* convertArrToLL(vector<int>& arr)
// {
//     Node* head = new Node(arr[0]);
//     Node* mover = head;

//     for(int i =  1; i < arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }


// void printLinkedList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }


// Node* reverseLinkedList(Node* head) {
 
//     Node* temp = head;  
   
//     stack<int> st;     

//     while (temp != nullptr) {
//         st.push(temp->data); 
//         temp = temp->next;    
//     }
   
//     temp = head; 

//     while (temp != nullptr) {
//         temp->data = st.top();  
//         st.pop();              
//         temp = temp->next;     
//     }
//     return head;  
// }



// int main() {
//     // Create a linked list with
//     // values 1, 3, 2, and 4
//     Node* head = new Node(1);
//     head->next = new Node(3);
//     head->next->next = new Node(2);
//     head->next->next->next = new Node(4);

//     // Print the original linked list
//     cout << "Original Linked List: ";
//     printLinkedList(head);

//     // Reverse the linked list
//     head = reverseLinkedList(head);

//     // Print the reversed linked list
//     cout << "Reversed Linked List: ";
//     printLinkedList(head);

//     return 0;
// }


// optimal (iterative)


// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//     public:
//         Node(int data1 , Node* next1){
//             data =data1;
//             next = next1;
//         }
//     public:
//         Node(int data1){
//             data = data1;
//             next = nullptr;
//         }

// };

// Node* convertArrToLL(vector<int>& arr)
// {
//     Node* head = new Node(arr[0]);
//     Node* mover = head;

//     for(int i =  1; i < arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }

// void printLinkedList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }


// Node* reverseLinkedList(Node *head)
// {
//    // Initialize'temp' at
//    // head of linked list
//    Node* temp = head;  
   
//    // Initialize pointer 'prev' to NULL,
//    // representing the previous node
//    Node* prev = NULL;  
   
//    // Traverse the list, continue till
//    // 'temp' reaches the end (NULL)
//    while(temp != NULL){  
//        // Store the next node in
//        // 'front' to preserve the reference
//        Node* front = temp->next;  
       
//        // Reverse the direction of the
//        // current node's 'next' pointer
//        // to point to 'prev'
//        temp->next = prev;  
       
//         // Move 'prev' to the current
//         // node for the next iteration
//        prev = temp;  
       
//         // Move 'temp' to the 'front' node
//         // advancing the traversal
//        temp = front; 
//    }
   
//    // Return the new head of
//    // the reversed linked list
//    return prev;  
// }




// int main() {
//   // Create a linked list with
//     // values 1, 3, 2, and 4
//     Node* head = new Node(1);
//     head->next = new Node(3);
//     head->next->next = new Node(2);
//     head->next->next->next = new Node(4);

//     // Print the original linked list
//     cout << "Original Linked List: ";
//     printLinkedList(head);

//     // Reverse the linked list
//     head = reverseLinkedList(head);

//     // Print the reversed linked list
//     cout << "Reversed Linked List: ";
//     printLinkedList(head);

//     return 0;

//     return 0;
// }



// optimal(recursive)



#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data1 , Node* next1){
            data =data1;
            next = next1;
        }
    public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }

};

Node* convertArrToLL(vector<int>& arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i =  1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


Node* reverseLinkedList(Node *head)
{
    // Base case:
    // If the linked list is empty or has only one node,
    // return the head as it is already reversed.
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    // Recursive step:
    // Reverse the linked list starting 
    // from the second node (head->next).
    Node* newHead = reverseLinkedList(head->next);
    
    // Save a reference to the node following
    // the current 'head' node.
    Node* front = head->next;
    
    // Make the 'front' node point to the current
    // 'head' node in the reversed order.
    front->next = head;
    
    // Break the link from the current 'head' node
    // to the 'front' node to avoid cycles.
    head->next = NULL;
    
    // Return the 'newHead,' which is the new
    // head of the reversed linked list.
    return newHead;
}




int main() {
  // Create a linked list with
    // values 1, 3, 2, and 4
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

  

    return 0;
}
