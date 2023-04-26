#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node* link;

public:
    Node(int val, Node* next = nullptr);
    int getData();
    void setData(int val);
    Node* getNext();
    void setNext(Node* next);
};

#endif // NODE_H
