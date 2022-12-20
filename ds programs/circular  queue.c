#include<stdio.h>
void enqueue(int);
void dequeue();
void display();
#define maxsize 3
 struct data
 {
     int cirque[50];
     int front ;
     int rear; }s;
void main()
{int choice,item;
    s.front=-1;
    s.rear=-1;
    do{printf("enter 1 for insertion\n");
    printf("enter 2 for deletion\n");
    printf("enter 3 for display\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
       {printf("enter the item to enter \n");
        scanf("%d",&item);
        enqueue(item);
        break;}
    case 2:
        {dequeue();
        break;}
    case 3:
        {display();
        break;}
    default:
        printf("enter the valid choice\n");
        return;


    }}while(1);

}
void enqueue(int item)
{
    if(s.front==((s.rear+1)%maxsize))
       {
           printf("queue overflow\n");
           return;

       }
       else if(s.front==-1)
        {s.front=0;
        s.rear=0;
        }

        else
    {s.rear=(s.rear+1)%maxsize;}

            s.cirque[s.rear]=item;}
void dequeue()
{ if(s.front==-1)
   {
       printf("queue underflow\n");
   }
   printf("the deleted element  is %d\n",s.cirque[s.front]);
  if (s.front==s.rear)
   {s.front=-1;
    s.rear=-1;}
   else
   {s.front=(s.front+1)%maxsize;}
       }

void display()
{
    int i;
    if(s.front==-1)
    {
        printf("queue empty\n");}
        i=s.front;
     while(i<=s.rear
    {
        printf("%d\n",s.cirque[i]);
        i=(s.front+1)%maxsize;

    }

}
