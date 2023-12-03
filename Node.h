

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H


class Node {
public:
    explicit Node (int value);
private:
    int value;
    Node* next;
};


#endif //LINKED_LIST_NODE_H
