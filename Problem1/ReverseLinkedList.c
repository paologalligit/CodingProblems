#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    int value;
    struct node *next;
};

typedef struct node Node;
typedef Node *NodePtr;

void reverse_in_place(NodePtr *head) {
    //checking whether head or next is not null
    if(*head && (*head)->next) {
        NodePtr old = *head;
        NodePtr start = old->next;
        NodePtr tmp = NULL;

        //this will be the last node
        old->next = NULL;
        while(start->next) {
            tmp = start->next;
            start->next = old;
            old = start;
            start = tmp;
        }

        //changing the new first node pointer
        start->next = old;
        *head = start;
    }
}

void print_list(NodePtr r) {
    while(r) {
        printf("%d -> ", r->value);
        r = r->next;
    }
    puts("NULL");
}

int main(void) {
    //test

    //a null list
    NodePtr null = NULL;
    reverse_in_place(&null);
    assert(null == NULL);

    //a list with only one element
    NodePtr a = malloc(sizeof(Node));
    a->value = 1;
    a->next = NULL;
    print_list(a);

    //a list with 6 elements
    NodePtr b = malloc(sizeof(Node));
    NodePtr c = malloc(sizeof(Node));
    NodePtr d = malloc(sizeof(Node));
    NodePtr e = malloc(sizeof(Node));
    NodePtr f = malloc(sizeof(Node));

    b->value = 2;
    c->value = 3;
    d->value = 4;
    e->value = 5;
    f->value = 6;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    print_list(a);

    reverse_in_place(&a);

    print_list(a);

    return 0;
}
