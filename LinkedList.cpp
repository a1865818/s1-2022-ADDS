#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
	int size = 0;
	Node * currNode = head;
	while(currNode != nullptr) {
		size++;
		currNode = currNode->link;
	}
	if (pos1 > size || pos2 > size) {
		return false;
	}
	// Traverse
	Node * currNode1 = head;
	Node * prevNode1 = nullptr;
	for (int i = 0; i < pos1; i++) {
		prevNode1 = currNode1;
		currNode1 = currNode1->link;
	}
	Node * currNode2 = head;
	Node * prevNode2 = nullptr;
	for (int i = 0; i < pos2; i++) {
		prevNode2 = currNode2;
		currNode2 = currNode2->link;
	}
	// Swap
	int temp = currNode1->data;
	currNode1->data = currNode2->data;
	currNode2->data = temp;
	return true;
}

bool LinkedList::find_and_delete(int target) {
	Node * currNode = head;
	Node * prevNode = nullptr;
	while(currNode != nullptr) {
		if (currNode->data == target) {
			if (prevNode == nullptr) {
				head = currNode->link;
				delete currNode;
				return true;
			} else {
				prevNode->link = currNode->link;
				delete currNode;
				return true;
			}
		}else{
			prevNode = currNode;
			currNode = currNode->link;
		}
	}
	return false;
}