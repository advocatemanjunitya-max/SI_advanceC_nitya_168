#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node *next;
};

int hasLoop(struct Node *head) {

    struct Node *slow = head;
    struct Node *fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    
        if (slow == fast)
    
        return 1;   
    }
    return 0;  
}