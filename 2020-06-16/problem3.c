#include <stdio.h>
#include <malloc.h>

typedef struct node {
    int key;
    struct node* prev;
    struct node* next;
}Node;

Node* head = NULL;


void insert(int key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = head;

    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->key = key;

    if (temp == NULL) {
        head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

int delete(int key) {
    Node* temp = head;
    Node* f = NULL;

    printf("DELETE [%d]\n", key);

    if ((head)->key == key) {
        if ((head)->next != NULL) {
            head = (head)->next;

            (head)->prev = NULL;
        }
        else {
            head = NULL;
        }

        free(temp);
        return 0;
    }

    while (temp->next != NULL) {
        if ((temp->next)->key == key) {
            f = temp->next;

            temp->next = (temp->next)->next;
            (temp->next)->prev = temp;

            free(f);

            return 0;
        }
        temp = temp->next;
    }
    return -1;
}


void main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
}

