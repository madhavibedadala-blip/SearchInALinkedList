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
    Node* insertionAtHead(Node* head, int a) {
        //Write your code here...
        if(head==NULL){
            Node*temp=new Node(a);
            return temp;
        }
        Node*temp=new Node(a,head,NULL);
        head->prev=temp;
        return temp;
    }

};
