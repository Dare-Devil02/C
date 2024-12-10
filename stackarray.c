#include<stdio.h>
#include<stdlib.h>
int stack[100],i,j,n,choice=0,top=-1;
void show();
void pop();
void push();
void main()
{   
    printf("Enter the number of elements in the stack : ");
    scanf("%d",&n);
    if(n>100)
    {
        printf("array out of bounds");
    }
    else
    {
        printf("stack operations using array");
        while(choice!=4)
        {
            printf("Choose one of the options below");
            printf("\n1. Push \n2. Pop \n3. show \n4. Exit");
            printf("\nEnter your choice : ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                push();
                break;

                case 2:
                pop();
                break;

                case 3:
                show();
                break;

                case 4:
                printf("Exiting.....");
                break;
                
                default:
                printf("Please enter valid choice");
            }
            
        }
        printf("-----Thank You-----");
    }
}
void push()
{
    int val;
    if(top==n)
    {
    printf("Stack Overflow");
    }
    else
    {
        printf("Enter the value to be pushed : ");
        scanf("%d",&val);
        top+=1;
        stack[top]=val;
        printf("Value Pushed");
    }
}
void pop()
{
    if(top==-1)
        printf("Stack Underflow");
    else
        top-=1;
        printf("Value Popped");
}
void show()
{
    for(i=top;i>=0;i--)
    printf("%d\n",stack[i]);
    if(top==-1)
    printf("Stack is empty");

}