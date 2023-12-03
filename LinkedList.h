

#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H

#include "Node.h"
class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    explicit LinkedList(int value);
};


#endif //LINKED_LIST_LINKEDLIST_H
