#include <stdio.h>
#define MAX 5

void insert(int);
int del();
void display();
int queue[MAX], front =- 1, rear =- 1;

void insert(int element){
    if (rear == MAX - 1){
        printf ("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear += 1;
    queue [rear] = element;
}

int del(){
    int element;
    if (front ==-1 || front == rear + 1){
        printf ("Queue is empty\n");
        return 0;
    }
    element = queue[front];
    front += 1;
    printf ("%d element has been deleted\n", element);
    return element;
}

void display(){
    if (front == -1 || front == rear + 1){
        printf ("Queue is empty\n");
        return;
    }
    int i;
    for (i = front; i <= rear; i++)
        printf ("%d ", queue[i]);
    printf ("\n\n");
}

int main(){
    int choice, num;
    while(1){
        printf ("1. Insert element in Queue\n");
        printf ("2. Delete element from Queue\n");
        printf ("3. Display element in Queue\n");
        printf ("Enter 0 then prog will Exit\n");
        scanf ("%d", &choice);
        if (choice == 0)
            break;
        switch(choice){
            case 1:
                printf ("Enter number to be inserted in Queue\n");
                scanf ("%d", &num);
                insert(num);
                break;
            case 2:
                num = del();
                break;
            case 3:
                display();
                break;
            //case 4:
                //exit(1);
            default:
                printf ("Invalid Choice\n");
        }
    }
    return 0;
}
