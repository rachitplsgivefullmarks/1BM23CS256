#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


void sortList(struct Node* head) {
    if (head == NULL) return;

    struct Node* current = head;
    struct Node* index = NULL;
    int temp;

    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}
void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}


void concatenateLists(struct Node** head1, struct Node* head2) {
    if (*head1 == NULL) {
        *head1 = head2;
        return;
    }

    struct Node* temp = *head1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;
}

void createList(struct Node** head) {
    int n, value;
    printf("Enter the number of nodes for the list: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of nodes.\n");
        return;
    }

    printf("Enter the values for the nodes:\n");
    for (int i = 0; i < n; i++) {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        struct Node* newNode = createNode(value);
        if (*head == NULL) {
            *head = newNode;
        } else {
            struct Node* temp = *head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

int main()
{
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;


    printf("List 1:\n");
    createList(&list1);
    printf("List 2:\n");
    createList(&list2);


    printf("\nList 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    sortList(list1);
    printf("Sorted List 1: ");
    printList(list1);

    reverseList(&list1);
    printf("Reversed List 1: ");
    printList(list1);


    concatenateLists(&list1, list2);
    printf("Concatenated List: ");
    printList(list1);

    return 0;
}
