// Brute -->


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

 

Node* reverseDLL(Node* head){
    // if head is empty or there is only one element
    // we can directly just return the head
    if(head==NULL || head->next == NULL){
        return head;
    }
    
    // Initialise a stack st
    stack<int> st;
    
    // Initialise the node pointer temp at head
    Node* temp = head;
    
    // Traverse the doubly linked list via the temp pointer
    while(temp!=NULL){
        // insert the data of the current node into the stack
        st.push(temp->data);
        // traverse further
        temp = temp->next;
    }
    
    // Reinitialise temp to head
    temp = head;
    
    // Second iteration of the DLL to replace the values
    while(temp!=NULL){
        // Replace the value pointed via temp with
        // the value from the top of the stack
        temp->data = st.top();
        // Pop the value from the stack
        st.pop();
        // Traverse further
        temp = temp->next;
    }
    
   
    return head;

}


int main() {
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertArr2DLL(arr);
    cout << endl << "Doubly Linked List Initially:  " << endl;
    print(head);
    cout << endl << "Doubly Linked List After Reversing " << endl;
    
     // Insert a node with value 10 at the end
    head = reverseDLL(head);
    print(head);
}


