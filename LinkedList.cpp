#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = len - 1; i >= 0; i--) {
        insertPosition(1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->getNext();
        delete current;
        current = next;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 1 || head == nullptr) {
        head = new Node(newNum, head);
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current->getNext() != nullptr; i++) {
            current = current->getNext();
        }
        Node* newNode = new Node(newNum, current->getNext());
        current->setNext(newNode);
    }
}

bool LinkedList::deletePosition(int pos) {
    if (head == nullptr || pos < 1) {
        return false;
    } else if (pos == 1) {
        Node* current = head;
        head = current->getNext();
        delete current;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current->getNext() != nullptr; i++) {
            current = current->getNext();
        }
        if (current->getNext() == nullptr) {
            return false;
        }
        Node* deleteNode = current->getNext();
        current->setNext(deleteNode->getNext());
        delete deleteNode;
    }
    return true;
}

int LinkedList::get(int pos) {
    if (head == nullptr || pos < 1) {
        return -1;
    }
    Node* current = head;
    for (int i = 1; i < pos && current != nullptr; i++) {
        current = current->getNext();
    }
    if (current == nullptr) {
        return -1;
    }
    return current->getData();
}


int LinkedList::search(int target) {
    Node* current = head;
    int index = 1;
    while (current != nullptr) {
        if (current->getData() == target) {
            return index;
}
    current = current->getNext();
    index++;
    }
    return -1;
    }

    void LinkedList::printList() {
        if (head == nullptr) {
        return;
    }
    Node* current = head;
    std::cout << "[";
    while (current != nullptr) {
        std::cout << current->getData();
        current = current->getNext();
        if (current != nullptr) {
            std::cout << " ";
        }
    }
    std::cout << "]";
    }
