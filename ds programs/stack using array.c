#include<stdio.h>
#define MAXSIZE  6

void push();
void pop();
void display();
struct data
{
    int stack[MAXSIZE];
    int top;
};
typedef struct data stk;
stk s;
void push()
{ int item;
  if(s.top== MAXSIZE-1)
    {printf("stack overflow\n");}
  else
    {s.top++;
    printf("enter item to enter\n");
    scanf("%d",&item);
    s.stack[s.top]=item;
    }}
   void pop()
    { int x;
     if(s.top==-1)
    {printf("empty");}
 else
    {x=s.stack[s.top];
    printf("the deleted element is %d\n",x);
   s.top--;}}
void display()
{ int i;
    if(s.top>=0)
    {
        printf("the element in stack \n");
        for(i=s.top;i>=0;i--)
        {printf("%d\n",s.stack[i]);}}
    else {printf("stack is empty");}}
    int main()
    {int choice;
       s.top=-1;
       do{ printf("enter 1 for push \n");
        printf("enter 2 for pop\n");
        printf("enter 3 for display\n");
        scanf("%d",&choice);
           switch(choice)
           {case 1:{
               push();
               break;}
               case 2:
             {pop();
              break;}
            case 3:
            {display();
             break;}
            default:
            {printf("enter valid choice");}}}
            while(choice!=4);
    }






