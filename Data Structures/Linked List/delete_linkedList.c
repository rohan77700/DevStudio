// Linked List - Deleting a node from beginning, end & position

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

// inserting
void insertNode(int ele) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    temp -> data = ele;
    temp -> next = head;
    head = temp;
}

// deleting from beginning
void deleteFromBeginning() {
    if(head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    struct Node* temp = head;
    head = head -> next;
    free(temp);
}

// deleting from end
void deleteFromEnd() {
    if(head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    if(head -> next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = NULL;
}

// deleting from position
void deleteFromPosition(int pos) {
    if(head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    struct Node* temp = head;
    if(pos == 1) {
        head = temp -> next;
        free(temp);
        return;
    }
    for(int i = 0; i < pos-2 && temp != NULL; i++) {
        temp = temp -> next;
    }
    if(temp == NULL || temp -> next == NULL) {
        printf("Position out of range.\n");
        return;
    }
    struct Node* nextNode = temp -> next -> next;
    free(temp -> next);
    temp -> next = nextNode;
}

// printing the linked list
void print() {
    struct Node* temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

// deleting by user choice
void deleteNode() {
    int choice, pos;
    printf("\nChoose an operation to delete:\n");
    printf("1. Delete from beginning\n");
    printf("2. Delete from end\n");
    printf("3. Delete from position\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            deleteFromBeginning();
            break;
        case 2:
            deleteFromEnd();
            break;
        case 3:
            printf("Enter the position to delete: ");
            scanf("%d", &pos);
            deleteFromPosition(pos);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void freeMemory() {
    struct Node* temp;
    while(head != NULL) {
        temp = head;
        head = head -> next;
        free(temp);
    }
}

int main() {
    int size, ele, pos;
    head = NULL;
    printf("Enter the size: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        printf("Enter the elements: ");
        scanf("%d", &ele);

        // insertion 
        insertNode(ele);
        print();
    }

    // deletion
    deleteNode();
    print();

    // free allocated memory
    freeMemory();

    return 0;
}