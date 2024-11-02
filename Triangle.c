#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of triangle : ");
    scanf("%d %d %d",&a,&a,&c);
    if((a+b)>c||(b+c)>a||(a+c)>b)
    {
        printf("This is ");
        if(a==b||b==c||c==a)
        {
            if(a==b==c)
            {
                printf("equilateral triangle");
            }
            else
            {
                printf("isoscles triangle");
            }
        }
        else
        {
            printf("scalene triangle");
        }
    }
}