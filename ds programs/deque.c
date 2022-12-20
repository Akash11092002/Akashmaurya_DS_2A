#include<stdio.h>
#include<math.h>
#define MAX 30

 struct dequeue
{
    int queue[MAX];
    int rear,front;
}de;

void insert_rear(int );
void insert_front(int );
int delete_front();
int delete_rear();
void  display();

void main()
{
    int i,x,item,choice;
    do
    {
	printf("\n Enter 2 to insert into queue [REAR]");
	printf("\n Enter 3 to insert into queue [FRONT]");
	printf("\n Enter 4 to delete from queue [REAR]");
	printf("\n Enter 5 to delete from queue [FRONT]");
	printf("\n Enter 6 to display all elements");
	printf("\n Enter 7 to exit");
	printf("\n Please Enter Your Choice: ");

        scanf("%d",&choice);

        switch(che)
        {
            case 1:{printf("\nEnter the  elements you want insert");
                    scanf("%d",&item);
                    insert_rear(item);}
            case 2:  {printf("\nEnter the  elements you want insert");
                    insert_front(item);}
            case 3: delete_front();
            case 4: delete_rear();
            default:{printf("enter valid choice);
                     return;}}}while(1);}

