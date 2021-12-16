#pragma once

struct ListNode{ 
    int value;
    ListNode* nextNode;
};

void addNode(int value, ListNode* startNode);
ListNode* getNode(int value, ListNode* startNode);
void printNodes(ListNode* startNode);
