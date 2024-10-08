// Singly linked list

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

void print(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* DeleteFromHead(Node* head){
     if(head == NULL)
    {
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = {2,3,1,8} ;
    Node* head = convertArrToLL(arr);
    head = DeleteFromHead(head);
    print(head);
}