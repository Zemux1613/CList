#include <stdio.h>
#include "List.h"

int main() {

    ListNode* firstNode = new ListNode();

    for (int i = 1; i < 10; i++) {
        addNode(i, firstNode);
        printf("add node %d\n", i);
    }

    delete firstNode;

    return 0;
}
