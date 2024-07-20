
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
        Node* temp = new Node(arr[i], nullptr , prev);
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

Node* deleteFromTail(Node* head)
{
    if(head == NULL || head->next == NULL)
    {      
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
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrToDLL(arr);
    head = deleteFromTail(head);
    print(head);
    
}
