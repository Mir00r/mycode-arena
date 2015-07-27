#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
//#include <list>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long LLI
#define MAX 10005+5
#define row 5
#define col 5
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007

typedef struct Node  {
    int data;
    struct Node *next;
}node;

node *start;
node *last;

void insert_at_last( int data){
    node* temp,*p;

    p = start;
    temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    while(p->next != NULL)
        p = p->next;
    p = temp;

}



void insert_at_beginning(int data){
    node *pointer;
    pointer = (node*)malloc(sizeof(node));
    pointer->data = data;
    pointer->next = start;
    start = pointer;

}

void insert_at_nth_position(int data, int n){
    node *pointer,*temp;
    temp = start;
    pointer = (node*)malloc(sizeof(node));
    pointer->data = data;
    pointer->next = NULL;

    if(n == 1){
        pointer->next = start;
        start = pointer;
        return;
    }
    int i;
    for(i = 0; i < n-2; i++){
        temp = temp->next;
    }
    pointer->next = temp->next;
    temp->next = pointer;
}

void delete_at_nth_possition( int data){
    node *pointer;
    pointer=start;
    while(pointer->next!=NULL && (pointer->next)->data != data){
        pointer = pointer -> next;
    }

    if(pointer->next == NULL){
        printf("Element %d is not present in the list\n",data);
        return;
    }

    node *temp;
    temp = pointer -> next;
    pointer->next = temp->next;
    free(temp);
    return; }

void delete_at_last(){
    node *pointer;
    pointer = start;

    while(pointer->next->next != NULL){
        pointer = pointer -> next;
    }
    node *temp;
    temp = pointer -> next;
    pointer->next =NULL;
    free(temp);
    return;
}

void delete_at_beginning(){
    node *temp;
    temp = start;
    start = start->next;
    free(temp);
        return;
    }


void print(){
    node *pointer;
    pointer = start;

    if(pointer == NULL)
        printf("The list is Empty.");

        while(pointer != NULL){
            printf("%d ", pointer->data);
            pointer = pointer->next; }
}

int find( int key){
    node *pointer;
    pointer = start;

    pointer =  pointer -> next;
    while(pointer!=NULL){
        if(pointer->data == key){
            return 1;
        }

    pointer = pointer -> next;}
    return 0;
}


int main(){
    start=NULL;

    while(1){
        printf("\n");
        printf("                                 1. Insertion\n");
        printf("                                 2. Deletion\n");
        printf("                                 3. Printing\n");
        printf("                                 4. Finding\n\n");
        printf("Please Enter your Choice: ");

        int query, data;
        scanf("%d",&query);
        printf("\n");

        if(query == 1){
            int n, m, i;
            printf("                                 1.Insert at Last.\n");
            printf("                                 2.Insert at Beginning.\n");
            printf("                                 3.Insert at nth position.\n\n");
            printf("Please Enter your Choice Where you want to insert: ");

            scanf("%d", &m);
            printf("\n");

            if(m == 1){

                printf("Enter the number of element:");
                //scanf("%d",&n);
                //for(i=0;i<n;i++){

                scanf("%d",  &data);
                insert_at_last(data);
            }

                   // }

            if(m == 2){
                printf("                                 ");
                scanf("%d", &data);
                insert_at_beginning(data);
            }
            if(m == 3){
                int k;
                printf("              Please enter data:         ");

                scanf("%d",&data);
                printf("\n");
                printf("              Please enter the position: ");
                scanf("%d",&k);
                printf("\n");
                insert_at_nth_position(data,k);
            }
        }

        if(query == 2){
            int c;
            printf("                                 1.Delete at Beginning.\n");
            printf("                                 2.Delete at Last.\n");
            printf("                                 3.Delete at nth position.\n\n");
            printf("Please Enter your Choice Where you want to Delete: ");

            scanf("%d",&c);

            if(c == 3){

            scanf("%d",&data);
            delete_at_nth_possition(data);}

            if(c == 2){
                delete_at_last();
            }
            if(c == 1){
                delete_at_beginning();
            }
        }

        if(query == 3){
            printf("The list is                      :");
            print();
            printf("\n\n");

        }

        if(query == 4){
            scanf("%d",&data);
            int status = find(data);

            if(status)
                printf("Element Found\n");
            else
                printf("Element Not Found\n");
        }
    }
    system("cls");

    return 0;
}
