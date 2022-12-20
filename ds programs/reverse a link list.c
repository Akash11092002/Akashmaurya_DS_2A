#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*start=NULL;
void create()
{ int choice;
  struct node*temp,*ptr;
    printf("enter the choice other than 1 to create");
    scanf("%d",&choice);
    while(choice!=1)

    {  temp=(struct node*)malloc(sizeof(struct node));
         if(temp==NULL)
         {
             printf("computer out of memory");
             return;

         }


             printf("enter the data");
             scanf("%d",&temp->data);
             temp->next=NULL;
             if (start==NULL)
             {
                 start=temp;
                 ptr=temp;

             }
             else{
                ptr->next=temp;
                ptr=temp;
             }
             printf("enter the choice other than 1");
             scanf("%d",&choice);}


}
void display()
{   struct node*ptr;

    if (start==NULL)
    {
        printf("nothing to display");
        return;
    }
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
void reverselist()
{
    struct node*prevnode,*currentnode,*nextnode;
    prevnode=NULL;
    currentnode=start;
    nextnode=start;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
        start=prevnode;
    }
}
int main()
{
    int ch;
   do{ printf("enter 1 to create\n");
    printf("enter 2 to display\n");
    printf("enter 3 to reverse ");



    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {create();
        break;}
    case 2:
        {display();
        break;}
    case 3:
        {
            reverselist();
            break;
        }
    default:
        printf("enter the valid choice");

    } }while(ch!=0);



}
