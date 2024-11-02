#include<stdio.h>
#include<stdlib.h>
//Defining structure of node
struct node{
    int data;
    struct node* next;
};
//Function for traversal
void Linkedlisttraversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
//Case 1: Deleting the first element from the linked list
struct node* deletefirst(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//Deleting the element at a given index
struct node* deleteatindex(struct node* head,int index){
    struct node *p=head;
    struct node *q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//case 3 : Deleting last element 
struct node* deleteAtlast(struct node* head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
//Case 4: Deleting the element with a given value from the linked list
struct node* deletevalue(struct node* head, int value)
{
    struct node* p=head;
    struct node* q=head->next;
    while(q->data!=value && q->next!=NULL)
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
    //Declaring Nodes
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    //Allocate memory for the same
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    //Linking first and second nodes
    head->data=4;
    head->next=second;

    //Linking second and third node
    second->data=3;
    second->next=third;
    
    //linking third and fouth node
    third->data=8;
    third->next=fourth;

    //Fourth node
    fourth->data=1;
    fourth->next=NULL;


    printf("Linked list before deletion\n");
    Linkedlisttraversal(head);
    head=deletefirst(head);
    printf("Linked list after deletion\n");
    Linkedlisttraversal(head);
    return 0;
}