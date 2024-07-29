//Better -->


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

// bool detectLoop(Node* head) {
    
//     // Initialize a pointer 'temp'
//     // at the head of the linked list
//     Node* temp = head;  
    
//     // Create a map to keep track of
//     // encountered nodes
//     unordered_map<Node*, int> nodeMap;  

//     // Step 2: Traverse the linked list
//     while (temp != nullptr) {
//         // If the node is already in the
//         // map, there is a loop
//         if (nodeMap.find(temp) != nodeMap.end()) {
//             return true;
//         }
//         // Store the current node
//         // in the map
//         nodeMap[temp] = 1;
        
//         // Move to the next node
//         temp = temp->next;  
//     }

//     // Step 3: If the list is successfully traversed 
//     // without a loop, return false
//     return false;
// }

// int main() {
//     // Create a sample linked list
//     // with a loop for testing
    
//     Node* head = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);
//     Node* fourth = new Node(4);
//     Node* fifth = new Node(5);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//      // Create a loop
//     fifth->next = third; 

//     // Check if there is a loop 
//     // n the linked list
//     if (detectLoop(head)) {
//         cout << "Loop detected in the linked list." << endl;
//     } else {
//         cout << "No loop detected in the linked list." << endl;
//     }

//     // Clean up memory (free the allocated nodes)
//     delete head;
//     delete second;
//     delete third;
//     delete fourth;
//     delete fifth;

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

bool detectLoop(Node* head) {
    
     // Initialize two pointers, slow and fast,
    // to the head of the linked list
    Node* slow = head;
    Node* fast = head;

    // Step 2: Traverse the linked list with
    // the slow and fast pointers
    while (fast != nullptr && fast->next != nullptr) 
    {
        // Move slow one step
        slow = slow->next;
        // Move fast two steps
        fast = fast->next->next;

        // Check if slow and fast pointers meet
        if (slow == fast) 
        {
            return true;  // Loop detected
        }
    }

    // If fast reaches the end of the list,
    // there is no loop
    return false;
}

int main() {
    // Create a sample linked list
    // with a loop for testing
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    // Check if there is a loop 
    // n the linked list
    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}





