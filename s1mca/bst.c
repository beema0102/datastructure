#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int value) 
{
    if (root == NULL)
        return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

void inorder(struct Node* root) 
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) 
{
    if (root != NULL) 
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) 
{
    if (root != NULL) 
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

struct Node* findMin(struct Node* root) 
{
    while (root->left != NULL)
        root = root->left;
    return root;
}

struct Node* deleteNode(struct Node* root, int value) 
{
    if (root == NULL)
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

struct Node* search(struct Node* root, int value) 
{
    if (root == NULL || root->data == value)
        return root;

    if (value < root->data)
        return search(root->left, value);

    return search(root->right, value);
}


void displayMenu() 
{
    printf("\nBinary Search Tree Operations:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Inorder Traversal\n");
    printf("5. Preorder Traversal\n");
    printf("6. Postorder Traversal\n");
    printf("7. Exit\n");
}

int main() 
{
    struct Node* root = NULL;
    int choice, value;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (search(root, value) != NULL)
                    printf("Value found in the BST.\n");
                else
                    printf("Value not found in the BST.\n");
                break;

            case 4:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 5:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;

            case 6:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;

            case 7:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 7);

    return 0;
}



