#include <stdio.h>
#define MAX 4

int stack[MAX];
int top = -1;
int pop();

void push(int);
void display();

void push(int element){
    if (top == MAX - 1){
        printf ("Stack is Overflow or full\n");
        return;
    }
    top += 1;
    stack[top] = element;
}

int pop(){
    int element;
    if (top == -1){
        printf ("Stack is empty\n");
        return 0;
    }
    element = stack[top];
    top = top - 1;
    printf ("%d element has been deleted\n", element);
    return element;
}

void display(){
    int i;
    if (top == -1){
        printf ("Stack is empty\n");
        return;
    }
    printf ("\n\n");
    for (i = top; i >= 0; i--)
        printf ("%d\n", stack[i]);
}


int main (){
    int choice , num;
    while(1){
        printf ("\nEnter your choice\n");
        printf ("1. Push\n");
        printf ("2. Pop\n");
        printf ("3. Display\n");
        printf ("When input 0 then program will be Exited\n");
        scanf ("%d", &choice);
            if (choice == 0)
                break;
        switch (choice){
            case 1:
                printf ("Enter number to be inserted : \n");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                num = pop();
                break;
            case 3:
                display();
                break;
            //case 4:
                //exit(1);
            default:
                printf ("Invalid choice\n");
        }
    }
    return 0;
}
