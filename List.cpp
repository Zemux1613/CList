#include "List.h"

void addNode(int value, ListNode* startNode) {

    ListNode* last = startNode;
    while (last->nextNode != nullptr) {
        last = last->nextNode;
    }

    last->nextNode = (ListNode*) malloc(sizeof(ListNode));
    last->nextNode->value = value;
    last->nextNode->nextNode = nullptr;
}


ListNode* getNode(int value, ListNode* startNode) {

    ListNode* last = startNode;
    while (last->nextNode != nullptr) {
    
        if (last->value == value) {

            return last;

        }

        last = last->nextNode;
    
    }

    return nullptr;

}
