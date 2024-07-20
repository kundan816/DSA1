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

Node* insertBeforeValue(Node* head , int el , int val){
    if(head == NULL)          // if ll is empty
    {
        return NULL;
    }

    if(head->data==val){              //if ll has some element and val is 1st element
        return new Node(el,head);
    }

   
    Node* temp = head;

    while(temp->next != NULL){        // for worst case insertion that is before end value , we have to stop till 2nd last value
        
        if(temp->next->data==val)
        {
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
    head = insertBeforeValue(head,18,8);
    print(head);
}