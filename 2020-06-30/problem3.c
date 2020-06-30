#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
	int data;
	struct _Node* next;
} Node;


void insert(Node** head, int input) {
	Node* beforeNode;
	Node* newNode = (Node*)malloc(sizeof(Node));

	newNode->data = input;
	newNode->next = NULL;

	if (*head == NULL) {
		*head = newNode;
		return;
	}

	beforeNode = *head;

	if ((*head)->data > input) {
		newNode->next = *head;
		*head = newNode;
		return;
	}

	while (beforeNode->next != NULL && beforeNode->next->data < input) {
		beforeNode = beforeNode->next;
	}
	newNode->next = beforeNode->next;
	beforeNode->next = newNode;
}

int main() {
	Node* head = NULL;
	int input = 0;

	while (1) {
		scanf("%d", &input);
		if (input == 0) {
			break;
		}
		insert(&head, input);
	}

	return 0;
}