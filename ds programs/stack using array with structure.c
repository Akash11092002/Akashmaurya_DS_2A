#include <stdio.h>
#define MAXSIZE 6

struct data
{
    int stack[MAXSIZE];
    int top;
};
typedef struct data stk;
stk s;


void push(void);
void  pop(void);
void display(void);

void main()
{
    int choice = 1;
    s.top = -1;

    printf ("OPERATIONS\n");
   do{
    {

        printf ("  1  for   PUSH   \n");
        printf (" 2 for  POP    \n");
        printf (" 3 for  DISPLAY\n");
        printf (" 4 to close   \n");


        printf ("Enter your choice: ");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Program Exits");
            return;
        default:
            printf("Wrong Choice\n");
        }} }while(1);}

void push()
{
    int n;
    if (s.top == MAXSIZE-1)
    {
        printf ("Stack Overflow\n");
        return;
    }
    else
    {
        printf ("Enter the element to insert: \n");
        scanf ("%d", &n);
        s.top = s.top + 1;
        s.stack[s.top] = n;
        push();
    }
    return;
}

void pop()
{
    int n;
    if (s.top==-1)
    {
        printf ("Stack Underflow\n");
        return;
    }
    else
    {
        n = s.stack[s.top];
        s.top = s.top-1;
        printf ("Deleted element is = %d\n",n);

    }
    return;
}

void display()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\nThe elements of stack are=\n");
        for (i=s.top; i>=0; i--)
        {
            printf ("%d ", s.stack[i]);
        }
    }
    printf ("\n");
}
