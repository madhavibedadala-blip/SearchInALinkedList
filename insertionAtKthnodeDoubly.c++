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
    Node* insertBeforeKthNode(Node* head, int k, int a) {
       
        Node*temp=head;
        int count=0;
        while(temp!=NULL){
            if(count==k){
                break;
            }
            count++;
            temp=temp->next;
        }
        if(k==0){
            return insertionAtHead(head)
        }
        Node*back=temp->prev;
        Node*n=new Node(a,temp,back);
        back->next=n;
        temp->prev=n;
    }

};
