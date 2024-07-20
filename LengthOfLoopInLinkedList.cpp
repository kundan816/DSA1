// Better -->


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

// int lengthOfLoop(Node* head) {
//     // Hashmap to store visited  nodes and their timer values
//     unordered_map<Node*, int> mpp; 
    
//     // Initialize pointer to  traverse the linked list
//     Node* temp = head; 
    
//     // Initialize timer to track  visited nodes
//     int timer = 1;      //we can initialize with  0 also 

//     // Traverse the linked list till temp reaches nullptr
//     while (temp != NULL) {
        
//         // If revisiting a node return  the difference of timer values
//         if (mpp.find(temp) != mpp.end()) {
//             // Calculate the length of the loop
//             int loopLength = timer - mpp[temp];
            
//             // Return the length of the loop
//             return loopLength; 
//         }
//         // Store the current node and
//         // its timer value in the hashmap
//         mpp[temp] = timer;
        
//         // Move to the next node
//         temp = temp->next;
        
//          // Increment the timer
//         timer++;
//     }

//     // If traversal is completed and we reach the end of the list (null) means there is no loop
//     return 0;
// }



// int main() {
//     // Create a sample linked
//     // list with a loop
    
//     Node* head = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);
//     Node* fourth = new Node(4);
//     Node* fifth = new Node(5);

//     // Create a loop from
//     // fifth to second
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
    
//     // This creates a loop
//     fifth->next = second; 

//     int loopLength = lengthOfLoop(head);
//     if (loopLength > 0) {
//         cout << "Length of the loop: " << loopLength << endl;
//     } else {
//         cout << "No loop found in the linked list." << endl;
//     }

//     return 0;
// }






// Optimal -->


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

int findLength(Node* slow, Node* fast){
    
    // count to keep track of  nodes encountered in loop
    int cnt = 1;
    
    // move fast by one step
    fast = fast->next;
    
    // traverse fast till it  reaches back to slow
    while(slow!=fast){
        
        // at each node increase count by 1 and move fast forward by one step
        cnt++;
        fast = fast->next;
    }
    
    // loop terminates when fast reaches  slow again and the count is returned
    return cnt;
}
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Step 1: Traverse the list to detect a loop
    while (fast != nullptr && fast->next != nullptr) {
        // Move slow one step
        slow = slow->next;     
        // Move fast two steps
        fast = fast->next->next;

        // Step 2: If the slow and fast pointers
        // meet, there is a loop
        if (slow == fast) {
            // return the number of nodes
            // in the loop
            return findLength(slow, fast);
        }
    }

    // Step 3: If the fast pointer
    // reaches the end, there is no loop
    return 0; 
}


int main() {
    // Create a sample linked
    // list with a loop
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Create a loop from
    // fifth to second
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    // This creates a loop
    fifth->next = second; 

    int loopLength = lengthOfLoop(head);
    if (loopLength > 0) {
        cout << "Length of the loop: " << loopLength << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}