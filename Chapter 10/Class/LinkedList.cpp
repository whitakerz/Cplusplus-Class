//
// Created by Zachary Whitaker on 11/7/2025.
//

#include "LinkedList.h"

namespace std {
} // std

class Node {
    int data;
    Node* next;
};

class list {
private:
    Node* head;
public:
    list() : head(nullptr) {}
    void insertBeg(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

};