#include<stdio.h>
struct stack
{
    int data;
    struct stack*next;
};
struct stack*top=NULL;
struct stack*temp,*ptr;
void push()
{
    temp=(struct stack*)malloc(sizeof(struct stack));
    if (temp==NULL)
    {
        printf("computer out of memory");
    }
    else
    {
        printf("enter the data");
        scanf("%d",&temp->data);
        if(top==NULL)
        {
            temp->next=NULL;
            top=temp;
        }
        else{
        temp->next=top;
        top=temp;}
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("no element to delete ");

    }
    else
    {
        ptr=top;
        top=top->next;

        printf("%d",ptr->data);
        free(ptr);
    }
}
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
void main()
{
    int choice;
    do{
    printf("enter the 1 for push \n");
    printf("enter 2 for pop");
    printf("enter 3 for display\n");
    scanf("%d",&choice);
    switch(choice)
    {case 1:
        {
            push();
          break;        }
    case 2:
        {
            pop();
            break;
        }

    case 3:
        {
            display();
            break;
        }
    default:
        {printf("enter the valid choice ");
        return;}}}while(5);}

