// Linked List - Inserting a node at beginning, end & position

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

// inserting at beginning
void insertAtBeginning(int ele) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    temp -> data = ele;
    temp -> next = head;
    head = temp;
}

// inserting at end
void insertAtEnd(int ele) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    temp -> data = ele;
    temp -> next = NULL;
    if(head == NULL) {
        head = temp;
        return;
    }
    struct Node* curr = head;
    while (curr -> next != NULL) {
        curr = curr -> next;
    }
    curr -> next = temp;
}

// inserting at position
void insertAtPosition(int ele, int pos) {
    if(pos < 0) {
        printf("Invaild position.\n");
        return;
    }
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    temp -> data = ele;
    temp -> next = NULL;
    
    if(pos == 0) {
        temp -> next = head;
        head = temp;
        return;
    }
    struct Node* prev = NULL;
    struct Node* curr = head;
    int count = 0;
    while(curr != NULL && count < pos) {
        prev = curr;
        curr = curr -> next;
        count++;
    }
    if(count < pos) {
        printf("Position out of range.\n");
        free(temp);
        return;
    }
    prev -> next = temp;
    temp -> next = curr;
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
        
        // insert elements at beginning for even iteration and at the end for odd iteration
        if(i % 2 == 0) {
            insertAtBeginning(ele);
        } else {
            insertAtEnd(ele);
        }
        
        print();
    }

    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &ele);

    // insertion at position
    insertAtPosition(ele, pos);

    print();

    // free allocated memory
    freeMemory();

    return 0;
}