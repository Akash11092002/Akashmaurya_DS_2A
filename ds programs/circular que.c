#include<stdio.h>
void enqueue(int);
void dequeue();
void display();
#define maxsize 6
 struct data
 {int que[maxsize];
     int rear;
     int front; };
 struct data  s;
void main()
{ int choice,item;
    s.front=-1;
    s.rear=-1;
 do{ printf("enter 1 for insertion\n");
   printf("enter 2 for deletion \n");
    printf("enter 3 for display\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
       {printf("enter the item to be entered\n");
        scanf("%d",&item);
        enqueue(item);
        break;}
    case 2:
        {
            dequeue();
            break;}
    case 3:
        {
            display();
            break;

        }
    default:
        {
            printf("enter valid choice ");
            return ;

        }

    }

} while(1);}
void enqueue(int item)
{
    if(s.front==(s.rear+1)%maxsize)
    {
        printf("queue overflow\n");
        return;
    }
    else if(s.front==-1)
    {
        s.front=0;
        s.rear=0;
    }
    else{
        s.rear=(s.rear+1)%maxsize;
    }
    s.que[s.rear]=item;

}
void dequeue()
{{
    int n;
    if (s.front==-1)
    {
        printf ("Queue Underflow\n");
        return;
    }
    n = s.que[s.front];
    if(s.front==s.rear)
    {
        s.front=s.rear=-1;
    }
    else
    {
        s.front = (s.front+1)%maxsize;
    }
    printf ("Deleted element is = %d \n",n);

}}
void display()
{
    int i=s.front;
    if (s.front == -1)
    {
        printf ("Queue is empty\n");
        return;
    }
    else
    {
        printf ("\nThe elements of queue are=\n");
        while (i!=s.rear)
        {
            printf("%d ",s.que[i]);
            i=(i+1)%maxsize;
        }
        printf("%d",s.que[s.rear]);
    }
    printf ("\n");

}


