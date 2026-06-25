#include <stdio.h>
#include <stdlib.h>

// Structure of Node
struct Node
{
    int data;
    struct Node *next;
};

// Function to reverse linked list
struct Node* reverseList(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while(current != NULL)
    {
        next = current->next;   // Save next node
        current->next = prev;   // Reverse link
        prev = current;         // Move prev
        current = next;         // Move current
    }

    head = prev;
    return head;
}

// Function to display list
void display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");
}

int main()
{
    struct Node *head = NULL;
    struct Node *first, *second, *third, *fourth;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    head = first;

    printf("Original Linked List:\n");
    display(head);

    head = reverseList(head);

    printf("\n\nReversed Linked List:\n");
    display(head);

    return 0;
}