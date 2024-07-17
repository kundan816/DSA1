
// Better

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



// Node* detectLoop(Node* head) {
    
//     // Use temp to traverse the linked list
//     Node* temp = head;
    
//     // hashmap to store all visited nodes
//     unordered_map<Node*, int> mp;
    
//     // Traverse the list using temp
//     while(temp!=NULL){
//         // check if temp has been encountered again
//         if(mp.find(temp)!=mp.()){
//             // A loop is detected hence return temp
//             return temp;
//         }
//         // store temp as visited
//         mp[temp] = 1;
//         // iterate through the list
//         temp = temp->next;
//     }

//     // If no loop is detected, return nullptr
//     return nullptr; 
// }

// int main() {
//     // Create a sample linked list with a loop
//     Node* node1 = new Node(1);
//     Node* node2 = new Node(2);
//     node1-> next = node2;
//     Node* node3 = new Node(3);
//     node2-> next = node3;
//     Node* node4 = new Node(4);
//     node3->next = node4;
//     Node* node5 = new Node(5);
//     node4-> next = node5;

//     // Make a loop from node5 to node2
//     node5->next = node2;

//     // Set the head of the linked list
//     Node* head = node1;

//     // Detect the loop in the linked list
//     Node* loopStartNode = detectLoop(head);

//     if (loopStartNode) {
//         cout << "Loop detected. Starting node of the loop is: " << loopStartNode->data << endl;
//     } else {
//         cout << "No loop detected in the linked list." << endl;
//     }

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



Node* firstNode(Node* head) {
    
    // Initialize a slow and fast 
    // pointers to the head of the list
    Node* slow = head;  
    Node* fast = head;  

    // Phase 1: Detect the loop
    while (fast != NULL && fast->next != NULL) {
        
        // Move slow one step
        slow = slow->next;        
        
        // Move fast two steps
        fast = fast->next->next;  

        // If slow and fast meet,
        // a loop is detected
        if (slow == fast) {
            
             // Reset the slow pointer
             // to the head of the list
            slow = head; 

            // Phase 2: Find the first node of the loop
            while (slow != fast) {
                
                // Move slow and fast one step
                // at a time
                slow = slow->next;  
                fast = fast->next;  

                // When slow and fast meet again,
                // it's the first node of the loop
            }
            
            // Return the first node of the loop
            return slow;  
        }
    }
    
     // If no loop is found, return NULL
    return NULL; 
}


int main() {
    // Create a sample linked list with a loop
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1-> next = node2;
    Node* node3 = new Node(3);
    node2-> next = node3;
    Node* node4 = new Node(4);
    node3->next = node4;
    Node* node5 = new Node(5);
    node4-> next = node5;

    // Make a loop from node5 to node2
    node5->next = node2;

    // Set the head of the linked list
    Node* head = node1;

    // Detect the loop in the linked list
    Node* loopStartNode = firstNode(head);

    if (loopStartNode) {
        cout << "Loop detected. Starting node of the loop is: "<< loopStartNode->data << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    return 0;
}