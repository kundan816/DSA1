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

Node* insertAtk(Node* head , int el , int k){
    if(head == NULL)          // if ll is empty
    {
        if(k==1)
        {
            return new Node(el);
        }
        else
        {
            return head;
        }
    
    }

    if(k==1){              //if ll has some element and k = 1
        return new Node(el,head);
    }

    int cnt = 0;
    Node* temp = head;

    while(temp != NULL){
        cnt++;

        if(cnt ==k-1){
            Node*x = new Node(el);
            x->next = temp->next;
            temp->next = x;
            break;

            // or
            // Node*x = new Node(el,temp->next);
            // temp->next = x;
            // break;
        }    
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2,3,1,8} ;
    Node* head = convertArrToLL(arr);
    head = insertAtk(head,45,2);
    print(head);
}