#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newnode(int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* insertNode(struct Node* node, int value) {
    if (node == NULL) {
        return newnode(value);
    }
    if (value < node->data) {
        node->left = insertNode(node->left, value);
    }
    else if (value > node->data) {
        node->right = insertNode(node->right, value);
    }
    return node;
}

void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct Node* root) {
    if (root != NULL) {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}

void displayTree(struct Node* root, int space) {
    if (root == NULL)
        return;

    space += 5;

    displayTree(root->right, space);

    printf("\n");
    for (int i = 5; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);

    displayTree(root->left, space);
}

int getInput() {
    int value;
    while (scanf("%d", &value) != 1) {
        printf("Invalid input. Please enter a valid integer: ");
        while (getchar() != '\n');
    }
    return value;
}

int main() {
    struct Node* root = NULL;
    int choice, data;


    printf("\n1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Display\n6. Exit\n");
    while (1) {


        printf("Enter your choice: ");
        choice = getInput();

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                data = getInput();
                root = insertNode(root, data);
                break;
            case 2:
                printf("Inorder Traversal:\n");
                inOrder(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal:\n");
                preOrder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal:\n");
                postOrder(root);
                printf("\n");
                break;
            case 5:
                printf("Displaying Tree Structure:\n");
                displayTree(root, 0);
                printf("\n");
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

Output:

1. Insert
2. Inorder
3. Preorder
4. Postorder
5. Display
6. Exit
Enter your choice: 1
Enter the value to insert: 5
Enter your choice: 1
Enter the value to insert: 3
Enter your choice: 1
Enter the value to insert: 2
Enter your choice: 1
Enter the value to insert: 7
Enter your choice: 1
Enter the value to insert: 4
Enter your choice: 5
Displaying Tree Structure:

     7

5

          4

     3

          2

Enter your choice: 2
Inorder Traversal:
 2  3  4  5  7
Enter your choice: 3
Preorder Traversal:
 5  3  2  4  7
Enter your choice: 4
Postorder Traversal:
 2  4  3  7  5
