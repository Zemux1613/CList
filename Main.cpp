#include <stdio.h>
#include "List.h"

int main() {

    ListNode* firstNode = new ListNode();

    for (int i = 1; i < 10; i++) {
        addNode(i, firstNode);
        printf("add node %d\n", i);
    }

    printf("\nNode6:\n");

    printf("\n\nValue of node6 is %d\n\n", getNode(6, firstNode)->value);
    
    delete firstNode;

    return 0;
}
