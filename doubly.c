#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
void dlltraverse(struct Node* head)
{
    struct Node* ptr=head;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=23;
    head->prev=NULL;
    head->next=second;
    second->data=34;
    second->next=third;
    second->prev=head;
    third->data=56;
    third->next=fourth;
    third->prev=second;
    fourth->data=52;
    fourth->next=NULL;
    fourth->prev=third;
    print("List before insertion\n");
    dlltraverse(head);

}
