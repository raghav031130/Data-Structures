#include<stdio.h>
#include<stdlib.h>
#define ARR 10
int stack_arr[ARR];
int top = -1;
void push(int item)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = item;
}
int pop()
{
        int item;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = stack_arr[top];
        top = top-1;
        return item;
}
int peek()
{
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}

int isEmpty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}
int isFull()
{
        if( top == ARR-1 )
                return 1;
        else
                return 0;
}
void display()
{
        int i;
        if( isEmpty() )
        {
                printf("\nHEY! Stack is empty\n");
                return;
        }
        printf("\n WoW! Stack elements are :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
        printf("\n");
}
int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.To Perform Push Operation\n");
                printf("2.To Perform Pop Operation\n");
                printf("3.To View element at the top\n");
                printf("4.To view all stack elements\n");
                printf("5.Stop\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nPlease! Enter the element you want to push : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        item = pop();
                        printf("\nPoped element is : %d\n",item );
                        break;
                 case 3:
                        printf("\nElement at the top is : %d\n", peek() );
                        break;
                 case 4:
                        display();
                        break;
                 case 5:
                        exit(1);
                 default:
                        printf("\nHEY! You have Choosen a Wrong Option\n");
                }
        }
        return 0;
}

