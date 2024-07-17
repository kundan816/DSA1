// Better  -->


#include <bits/stdc++.h>

using namespace std;


class Node {
public:
   
    int data;   
    Node* next;     
    Node* back;     

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }


    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};


Node* convertArr2DLL(vector<int> arr) {
    
    
    Node* head = new Node(arr[0]);
    
    Node* prev = head;            

    for (int i = 1; i < arr.size(); i++) {
       
        Node* temp = new Node(arr[i], nullptr, prev);
        
        prev->next = temp; 
        prev = temp;       
    }
  
    return head;  
}


void print(Node* head) {
    while (head != nullptr) {
    
        cout << head->data << " "; 
        head = head->next;         
    }
}

 
Node *findMiddle(Node *head) {
    // If the list is empty or has only
    // one element, return the head as
    // it's the middle.
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* temp = head;
    int count = 0;

    // Count the number of nodes in the linked list.
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Calculate the position of the middle node.
    int mid = count / 2 + 1;
    temp = head;

    // Traverse to the middle node by moving
    // temp to the middle position.
    while (temp != nullptr) {
        mid = mid - 1;

        // Check if the middle
        // position is reached.
        if (mid == 0){
            // break out of the loop
            // to return temp
            break;
        }
        // Move temp ahead
        temp = temp->next;
    }

    // Return the middle node.
    return temp;
}

int main() {
  
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Find the middle node
    Node* middleNode = findMiddle(head);

    // Display the value of the middle node
    cout << "The middle node value is: " << middleNode->data << endl;

    return 0;
}

