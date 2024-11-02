#include<stdio.h>
#include<stdlib.h>
//Defining structure of node
struct Node{
    int data;
    struct Node* next;
};

//Creating function for traversal
void LinkedListTraversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

//Insertion at beginning
struct Node* InsertAtFirst(struct Node* head, int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
//Insertion at index
struct Node* Insertinbetween(struct Node* head,int data,int index)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

//Insertion at end
struct Node* insertatend(struct Node* head,int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    ptr->data=data;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

//Defining main function
int main()
{

    //Memory allocation alongwith declaration
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));

    //Linking first and second nodes
    head->data=7;
    head->next=second;

    //linking second and third nodes
    second->data=11;
    second->next=third;

    //linking third and fourth nodes
    third->data=41;
    third->next=fourth;

    //terminate at fourth node
    fourth->data=66;
    fourth->next=NULL;
    printf("Linked List before insertion\n");
    LinkedListTraversal(head);
    head=InsertAtFirst(head,56);
    printf("Linked List After insertion\n");
    LinkedListTraversal(head);
    printf("Insertion in between\n");
    head=Insertinbetween(head,76,1);
    LinkedListTraversal(head);
    printf("Insertion at end\n");
    head=insertatend(head,77);
    LinkedListTraversal(head);
}
