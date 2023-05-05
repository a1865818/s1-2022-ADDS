#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    Node* head;
public:
    LinkedList();
    ~LinkedList();

    void insertFront(int item);
    void deleteFront();
    void printList();

    bool swap(int pos1, int pos2);
    bool find_and_delete(int target);
};

#endif