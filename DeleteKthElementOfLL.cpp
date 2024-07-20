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

Node* removeK(Node* head , int k){
    if(head == NULL )
    {
        return NULL;
    }

    if(k==1)                         // if element is 1st element
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    int cnt = 0;
    Node* prev = NULL;
    Node* temp = head;

    while(temp != NULL)
    {
        cnt++;
        if(cnt == k)
        {
            prev->next = prev->next->next;      // or prev->next = temp->next
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2,3,1,8} ;
    Node* head = convertArrToLL(arr);
    // head = removeK(head , 2);
    head = removeK(head , 3);
    print(head);
}