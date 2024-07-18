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

// Node* DeleteNthNodefromEnd(Node* head, int N) {
//     if (head == NULL) {
//         return NULL;
//     }
//     int cnt = 0;
//     Node* temp = head;

//     // Count the number of nodes in the linked list
//     while (temp != NULL) {
//         cnt++;
//         temp = temp->next;
//     }

//     // If N equals the total number of nodes, delete the head  (edge case)

//     if (cnt == N) {
//         Node* newhead = head->next;
//         delete (head);
//         return newhead;
//     }

//     // Calculate the position of the node to delete (res)
//     int res = cnt - N;
//     temp = head;

//     // Traverse to the node just before the one to delete
//     while (temp != NULL) {
//         res--;
//         if (res == 0) 
//         {
//             break;
//         }
//         temp = temp->next;
//     }

//     // Delete the Nth node from the end
//     Node* delNode = temp->next;
//     temp->next = temp->next->next;
//     delete (delNode);
//     return head;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int N = 3;
//     Node* head = new Node(arr[0]);
//     head->next = new Node(arr[1]);
//     head->next->next = new Node(arr[2]);
//     head->next->next->next = new Node(arr[3]);
//     head->next->next->next->next = new Node(arr[4]);

//     // Delete the Nth node from the end
//     // and print the modified linked list
//     head = DeleteNthNodefromEnd(head, N);
//     printLinkedList(head);
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

Node* DeleteNthNodefromEnd(Node* head, int N) {
    // Create two pointers, fast and slow
    Node* fast = head;
    Node* slow = head;

    // Move the fast pointer N nodes ahead
    for (int i = 0; i < N; i++){
        fast = fast->next;
    }

    // If fastp becomes NULL, the Nth node from the end is the head   (edge case)
    if (fast == NULL)
        return head->next;

    // Move both pointers until fast reaches the end
    while (fast->next != NULL) 
    {
        fast = fast->next;
        slow = slow->next;
    }
    // slow is the previous of the node to be deleted
    // Delete the Nth node from the end
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);

    // Delete the Nth node from the end 
    // and print the modified linked list
    head = DeleteNthNodefromEnd(head, N);
    printLinkedList(head);
}