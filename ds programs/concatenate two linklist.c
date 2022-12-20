#include<stdio.h>
struct node{
int data;
struct node*next;
};
struct node*temp,*start1=NULL,*start2=NULL;
void create1()
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
             if (start1==NULL)
             {
                 start1=temp;
                 ptr=temp;

             }
             else{
                ptr->next=temp;
                ptr=temp;
             }
             printf("enter the choice other than 1");
             scanf("%d",&choice);}


}
void create2()
{ int choice;
  struct node*temp,*ptr;
    printf("enter the choice other than 1 to create\n");
    scanf("%d\n",&choice);
    while(choice!=1)

    {  temp=(struct node*)malloc(sizeof(struct node));
         if(temp==NULL)
         {
             printf("computer out of memory\n");
             return;

         }


             printf("enter the data\n");
             scanf("%d\n",&temp->data);
             temp->next=NULL;
             if (start2==NULL)
             {
                 start2=temp;
                 ptr=temp;

             }
             else{
                ptr->next=temp;
                ptr=temp;
             }
             printf("enter the choice other than 1\n");
             scanf("%d\n",&choice);}


}
void display1()
{   struct node*ptr;

    if (start1==NULL)
    {
        printf("nothing to display\n");
        return;
    }
    ptr=start1;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void display2()
{   struct node*ptr;

    if (start2==NULL)
    {
        printf("nothing to display\n");
        return;
    }
    ptr=start2;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
concatenate()
{
    struct node*ptr;
    ptr=start1;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=start2;
}
displayconcatenate()
{
    struct node*ptr=start1;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;}
}
int main()
{
    int ch;
   do{ printf("enter 1 to create 1st link list \n");
    printf("enter 2 to display 1 st link list\n");
    printf("enter 3 to create 2 nd link list\n");
     printf("enter 4 to display 2nd list\n ");
     printf("enter 5 to concatenate both list\n");
     printf("enter 6 to display concatenated list\n");



    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {create1();
        break;}
    case 2:
        {display1();
        break;}
    case 3:
        {
            create2();
            break;
        }
    case 4:
        {
            display2();
            break;
        }
    case 5:
        {
            concatenate();
            break;

        }
    case 6:
        {
            displayconcatenate();
            break;
        }
    default:
        printf("enter the valid choice");

    } }while(ch!=0);



}
