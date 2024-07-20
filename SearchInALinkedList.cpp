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

Node* convertArrToLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i =  1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

bool searchKey(Node* head, int key) {
        Node* temp = head;
        
        while(temp)                             // or while(temp != nullptr)
        {
            if((temp->data) == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

int main(){
    vector<int> arr = {2,3,1,8} ;
    Node* head = convertArrToLL(arr);
    // cout<<head->data <<" ";

   cout<<searchKey(head,8)<<endl;
   cout<<searchKey(head,9)<<endl;


}