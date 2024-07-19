// Brute -->


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

Node* sortLL(Node* head){
    // Create a vector to
    // store node values
    vector<int> arr;
    
    // Temporary pointer to
    // traverse the linked list
    Node* temp = head;
    
    // Traverse the linked list and
    // store node values in the vector
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    
    // Sort the array
    // containing node values
    sort(arr.begin(), arr.end());
    
    // Reassign sorted values to
    // the linked list nodes
    temp = head;
    for(int i = 0; i < arr.size(); i++){
        // Update the node's data
        // with the sorted values
        temp->data = arr[i]; 
        // Move to the next node
        temp = temp->next; 
    }
    
    // Return the head of the
    // sorted linked list
    return head; 
}



int main() {
    // Linked List: 3 2 5 4 1
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);

    cout << "Original Linked List: ";
    printLinkedList(head);

    // Sort the linked list
    head = sortLL(head);

    cout << "Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}