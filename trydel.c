#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void linkedlisttraversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
//Case 1 : deleting a element from the linked list
struct Node* deletefirst(struct Node* head)
{
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//Case 2: deleting a element at a given index from the linked list
struct Node* deleteAtIndex(struct Node* head, int index)
{
    struct Node* p=head;
    struct Node* q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=4;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=1;
    fourth->next=NULL;
    printf("Linked LIst before deletion\n");
    linkedlisttraversal(head);
    head=deletefirst(head);
    printf("Linked list after deletion\n");
    linkedlisttraversal(head);
}