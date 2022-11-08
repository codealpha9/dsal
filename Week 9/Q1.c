#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} node ;
typedef struct node Node;

void insertNode(Node * prev,int x) {
    Node * new = (Node *) malloc(sizeof(Node));
    new->val = x;
    new->next = prev->next;
    prev->next = new;
}

void display(Node *node) {
    while(node != NULL) {
        printf("%d ",node->val);
        node = node->next;
    }
    printf("\n");
}

void input(Node *node,int n) {
    int i,temp;
    for (i=0;i<n;i++) {
        printf("Enter value to add ");
        scanf("%d",&temp);
        if (i == 0) {
            node->val = temp;
            node->next = NULL;
            continue;
        }
        insertNode(node,temp);
        node = node->next;
    }
}

void deleteNode(Node ** list, Node * tbd) {
    if (*list == tbd) {
        *list = (*list)->next;
    }
    else {
        Node * temp = (Node *) malloc(sizeof(Node));
        temp = *list;
        while (temp->next != NULL) {
            if (temp->next == tbd) {
                temp->next = tbd->next;
                break;
            }
            temp = temp->next;
        }
    }
    free(tbd);
}
int isEmpty(Node * list) {
    if (list == NULL)
        return 1;
    return 0;
}

void enqueue(Node ** list, int x) {
    Node * new = (Node *) malloc(sizeof(Node));
    if (isEmpty(*list)) {
        *list = new;
        (*list)->val = x;
        (*list)->next = NULL;
    }
    else {
        new = *list;
        while (new->next != NULL) 
            new = new->next;
        insertNode(new,x);
    }
}

int dequeue(Node **list) {
    if (isEmpty(*list)) {
        printf("Error. Empty queue");
        return -5;
    }
    else {
        int x = (*list)->val;
        deleteNode(list,*list);
        return x;
    }
}


int main(){
    int x,inp;
    Node * list = (Node *) malloc(sizeof(Node));
    list = NULL;
    printf("1. Enqueue, 2. Dequeue, -1. Exit");
    do {
        printf("\nEnter choice ");
        scanf("%d",&inp);
        if (inp == 1) {
            printf("Enter number to enqueue ");
            scanf("%d",&x);
            enqueue(&list,x);
        }
        else if (inp == 2) 
            printf("Dequeued: %d",dequeue(&list));
        else
            inp = -1;
    } while (inp != -1);
}
