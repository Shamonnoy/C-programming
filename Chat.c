#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int val;
    struct Node* next;
};

struct Node *head = NULL;
struct Node *last = NULL;

void printList(struct Node* node) 
{
    while (node != NULL) {
        printf("%d -> ", node->val);
        node = node->next;
    }
    printf("NULL\n");
}

void insertNode() 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter value for the item: ");
    scanf("%d", &new_node->val);
    new_node->next = NULL;

    if (head == NULL) 
    {
        head = new_node;
        last = new_node;
    } 
    else 
    {
        last->next = new_node;
        last = new_node;
    }
    printf("Item inserted...\n");
}

void swap(struct Node* a, struct Node* b) 
{
    int temp = a->val;
    a->val = b->val;
    b->val = temp;
}

void bubbleSort(struct Node* head) 
{
    int swapped;
    struct Node* ptr1;
    struct Node* lptr = NULL;
    
    if (head == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->val > ptr1->next->val) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

int main() 
{
    int n, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) 
    {
        insertNode();
    }

    
    printf("Unsorted Linked List: \n");
    printList(head);

    bubbleSort(head);

    printf("Sorted Linked List: \n");
    printList(head);

    return 0;
}