
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

Node* deleteFromHead(Node* head)
{
    if(head == NULL || head->next == NULL){
        return head;
    } 
    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;

}


Node* deleteFromTail(Node* head)
{
    if(head == NULL || head->next == NULL){
        return head;
    } 

    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    Node* secondLast = tail->back;
    secondLast->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;

   

}
Node*deleteFromKthPosition(Node* head, int k){
    if(head == NULL){
        return head;
    }

    int cnt = 0;
    Node* temp = head;

    while(temp!= NULL){
        cnt++;
        if(cnt==k)
        {
            break;
        }
        temp = temp->next;
    }

    Node* prev =temp->back;
    Node* front = temp->next;

    if(prev ==NULL || front == NULL){      // 1 element
        return NULL;
    }

    else if(prev == NULL){                  // head
        return deleteFromHead(head);
    }

    else if(front == NULL){                // tail
        return deleteFromTail(head);
    }

    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;

    delete temp;
    return head;

}
    

    int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrToDLL(arr);
    head = deleteFromKthPosition(head , 3);
    print(head);
    
}
