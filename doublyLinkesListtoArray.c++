#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        
        Node(): data(0), next(nullptr), prev(nullptr) {}
        Node(int data) : data(data), next(nullptr), prev(nullptr) {}
        Node(int data, Node* next) : data(data), next(next), prev(nullptr) {}
};

class solution {
public:
    vector<int> convertToArray(Node* head) {
        //Write your code here...
        vector<int>result;
        while(head!=nullptr){
            result.push_back(head->data);
            head=head->next;
        }
        return result;
    }
};
