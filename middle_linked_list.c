#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    struct Node *slow, *fast;
    int n, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
     slow = head;
    fast = head;
   while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("Middle element = %d", slow->data);
  return 0;
}