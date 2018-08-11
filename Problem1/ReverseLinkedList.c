#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

typedef struct node Node;
typedef Node *NodePtr;

void reverse_in_place(NodePtr head) {
    NodePtr old = head;
    NodePtr start = old->next;

    //while(start->)

}

int main(void) {
    return 0;
}
