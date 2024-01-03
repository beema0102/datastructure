#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to count the number of nodes in the list
int countNodes(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Function to insert a node at the first position
void insertAtFirst(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to insert a node at a given position
void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 1) {
        printf("Invalid position. Position should be 1 or greater.\n");
        return;
    }

    struct Node* newNode = createNode(data);

    if (position == 1) {
        insertAtFirst(head, data);
        return;
    }

    struct Node* current = *head;
    int count = 1;

    while (count < position - 1 && current != NULL) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        printf("Position out of bounds. Inserting at the end.\n");
        while (current->next != NULL) {
            current = current->next;
        }
    }

    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL) {
        current->next->prev = newNode;
    }
    current->next = newNode;
}

// Function to delete a node from the first position
void deleteFromFirst(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete from the first position.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;

    if (*head != NULL) {
        (*head)->prev = NULL;
    }

    free(temp);
}

// Function to delete a node from the last position
void deleteFromLast(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete from the last position.\n");
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    if (current->prev != NULL) {
        current->prev->next = NULL;
    } else {
        *head = NULL;
    }

    free(current);
}

// Function to search for a node with a given data
struct Node* search(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key) {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

// Function to traverse and print the elements of the list
void traverse(struct Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, position, key;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at first\n");
        printf("2. Insert at a position\n");
        printf("3. Delete from first\n");
        printf("4. Delete from last\n");
        printf("5. Count nodes\n");
        printf("6. Search\n");
        printf("7. Traverse\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at first: ");
                scanf("%d", &data);
                insertAtFirst(&head, data);
                break;

            case 2:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
                break;

            case 3:
                deleteFromFirst(&head);
                break;

            case 4:
                deleteFromLast(&head);
                break;

            case 5:
                printf("Number of nodes: %d\n", countNodes(head));
                break;

            case 6:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                if (search(head, key) != NULL) {
                    printf("Element found in the list.\n");
                } else {
                    printf("Element not found in the list.\n");
                }
                break;

            case 7:
                traverse(head);
                break;

            case 8:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}

