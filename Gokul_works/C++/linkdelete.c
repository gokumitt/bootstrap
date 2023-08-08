#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal( struct Node *ptr)
{
    while(ptr!= NULL)
    {

    printf("Element: %d\n", ptr->data); 
    ptr=ptr->next;
    }
}
struct Node *deleteFirst(struct Node *head){
struct Node*ptr=head;
head =head->next;
free(ptr);
return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head= (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct Node));
    third= (struct Node *)malloc(sizeof(struct Node));
    head->data=4;
    second->data=3;
    third->data=8;
    third->next= NULL;
    printf("Linked List before deletion\n");
    linkedListTraversal(head);
    head=deleteFirst(head);
     printf("Linked List after deletion\n");
    linkedListTraversal(head);
    return 0;
}