// Brute

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


// Node *deleteMiddle(Node *head) {

//     Node* temp = head;
    
//     int n = 0;
    
//     // Loop to count the number of nodes in the linked list
//     while(temp!=NULL){
//         n++;
//         temp = temp->next;
//     }
    
//     // Calculate the index of the middle node
//     int res = n/2;
    
//     // Reset the temporary node to the beginning of the linked list
//     temp = head;
    
//     // Loop to find the middle node to delete
//     while(temp!=NULL){
        
//         res --;
        
//         // If the middle node is found
//         if(res==0){
            
//             // Create a pointer  to the middle node
//             Node* middle = temp->next;
            
//             // Adjust pointers to  skip the middle node
//             temp->next = temp->next->next;
            
//             // Free the memory allocated to the middle node
//             free(middle);
            
//             // Exit the loop after  deleting the middle node
//             break;
//         }
//         // Move to the next node in the linked list
//         temp = temp->next;
//     }
//     // Return the head of the  modified linked list
//     return head;
// }


// int main() {
//     // Creating a sample linked list: 
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);
    
//     // Display the orignal linked list
//     cout << "Orginal Linked List: ";
//     printLinkedList(head);

//     // Deleting the middle node
//     head = deleteMiddle(head);

//     // Displaying the updated linked list
//     cout << "Orginal Linked List: ";
//     printLinkedList(head);

//     return 0;
// }



// Optimal



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


Node *deleteMiddle(Node *head) {

 // If the list is empty or has only one node,
    // return NULL as there is no middle node to delete
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    // Initialize slow and fast pointers
    Node* slow = head;
    Node* fast = head;
    fast = head->next->next;

    // Move 'fast' pointer twice as fast as 'slow'
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Delete the middle node by skipping it
    slow->next = slow->next->next;
    return head;
}


int main() {
    // Creating a sample linked list: 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    // Display the orignal linked list
    cout << "Orginal Linked List: ";
    printLinkedList(head);

    // Deleting the middle node
    head = deleteMiddle(head);

    // Displaying the updated linked list
    cout << "Orginal Linked List: ";
    printLinkedList(head);

    return 0;
}