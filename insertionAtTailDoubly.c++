#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value, Node* next_Address, Node* prev_Address){
            data = value; 
            next = next_Address; 
            prev = prev_Address;
        }
        Node(int value){
           data = value;
           next = nullptr;
           prev = nullptr;
        }
};


class solution {
public:
    Node* insertionAtTail(Node* head, int a) {
        //Write your code here...
        
        if(head==NULL){
            return new Node(a);
        }
        Node*tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        Node*temp=new Node(a,NULL,tail);
        tail->next=temp;
        return head;
    }

};
