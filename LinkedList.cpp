

#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}
