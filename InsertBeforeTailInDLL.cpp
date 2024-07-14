
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;
    public:
        Node(int data1 , Node* next1 , Node* back1){
            data =data1;
            next = next1;
            back = back1;
        }
    public:
        Node(int data1){
            data = data1;
            next = nullptr;
            back = nullptr;
        }

};

Node* convertArrToDLL(vector<int>& arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i =  1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void print(Node* head)
{
   
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* insertBeforeTail(Node* head , int val){
        if(head->next == NULL){
            return insertBeforeTail(head,val);
        }
        Node* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }
        Node* prev = tail->back;
        Node* newNode = new Node(val, tail, prev);
        prev->next = newNode;
        tail->back = newNode;
        return head;

}

 
    int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrToDLL(arr);
    head = insertBeforeTail(head , 10);
    print(head);
    
}