#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtFront(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAfter(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void deleteFromFront(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete from front.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete from end.\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node* secondLast = *head;
    while (secondLast->next->next != NULL) {
        secondLast = secondLast->next;
    }

    free(secondLast->next);
    secondLast->next = NULL;
}

struct Node* search(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key) {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

void traverse(struct Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, key;
    struct Node* nodeToInsertAfter;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at front\n");
        printf("2. Insert after a node\n");
        printf("3. Delete from front\n");
        printf("4. Delete from end\n");
        printf("5. Search\n");
        printf("6. Traverse\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the front: ");
                scanf("%d", &data);
                insertAtFront(&head, data);
                break;

            case 2:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter the key after which to insert: ");
                scanf("%d", &key);
                nodeToInsertAfter = search(head, key);
                insertAfter(nodeToInsertAfter, data);
                break;

            case 3:
                deleteFromFront(&head);
                break;

            case 4:
                deleteFromEnd(&head);
                break;

            case 5:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                if (search(head, key) != NULL) {
                    printf("Element found in the list.\n");
                } else {
                    printf("Element not found in the list.\n");
                }
                break;

            case 6:
                traverse(head);
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

