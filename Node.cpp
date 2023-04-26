#include "Node.h"

Node::Node(int val, Node* next) {
    data = val;
    link = next;
}

int Node::getData() {
    return data;
}

void Node::setData(int val) {
    data = val;
}

Node* Node::getNext() {
    return link;
}

void Node::setNext(Node* next) {
    link = next;
}
