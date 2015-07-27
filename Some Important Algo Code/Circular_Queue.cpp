#include <stdio.h>
#define MAX 5

void insert(int);
void display();

int del();
int circle_queue[MAX], front =- 1, rear =- 1;

void insert(int element)
{
    if ((front == 0 && rear == MAX - 1) || front == rear + 1)
    {
        printf ("Circular Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    if (rear == MAX - 1)
        rear = 0;
    else
        rear += 1;
    circle_queue[rear] = element;
}

int del()
{
    int element;
    if (front == -1)
    {
        printf ("Queue is empty\n");
        return 0;
    }
    element = circle_queue[front];
    if (front == rear)
    {
        front =- 1;
        rear =- 1;
    }
    else if (front == MAX - 1)
        front = 0;
    else
        front += 1;
    printf ("%d element has been deleted from the queue\n", element);
    return element;
}

void display()
{
    if (front ==- 1)
        printf ("Queue is empty\n");
    int temp = front;
    if (front <= rear)
    {
        while (temp <= rear)
            printf ("%d ", circle_queue[temp++]);
        printf ("\n\n");
    }
    else
    {
        while (temp <= MAX - 1)
            printf ("%d ", circle_queue[temp++]);
        printf ("\n\n");
        temp = 0;
        while (temp <= rear)
            printf ("%d ", circle_queue[temp++]);
        printf ("\n\n");
    }
}

int main ()
{
    int choice, num;
    while(1)
    {
        printf ("1. Insert element\n");
        printf ("2. Delete element\n");
        printf ("3. Display circular Queue\n");
        printf ("Enter 0 then exit\n");
        scanf ("%d", &choice);
        if (choice == 0)
            break;
        switch(choice)
        {
            case 1:
                printf ("Enter number has been inserted\n");
                scanf ("%d", &num);
                insert(num);
                break;
            case 2:
                num = del();
                break;
            case 3:
                display();
                break;
            default:
                printf ("Invalid choice\n");
        }
    }
    return 0;
}
