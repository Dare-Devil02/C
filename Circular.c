#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void clltraverse(struct Node* head);
struct Node* insertatfirst(struct Node* head, int value);
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=4;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=3;
    fourth->next=head;
    printf("List before insertion\n");
    clltraverse(head);
    insertatfirst(head,18);
    printf("\nList after insertion\n");
    clltraverse(head);
}
void clltraverse(struct Node* head)
{
    struct Node* ptr=head;
    do
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
}
struct Node* insertatfirst(struct Node* head, int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    // p is pointing to last point of circular linked list
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}