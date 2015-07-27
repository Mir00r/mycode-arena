#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100000+5
#define row 100
#define col 100

typedef pair <int, int> jora;

int arr[MAX], n, k;
//    deque <jora> dq;

void slide_minx (){
    int i;
deque <jora> dq;
    for (i = 0; i < n; i++) {

        while (!dq.empty() && dq.back().first >= arr[i]) {
            dq.pop_back();
        }
        dq.push_back (make_pair (arr[i], i));


        while (!dq.empty() && dq.front().second <= i - k) {
            dq.pop_front();
        }

        if (i >= k - 1)
            printf ("%d ", dq.front().first);

    }
    puts ("");
}

void slide_maxn (){
    int i;
    deque <jora> dq;
    for (i = 0; i < n; i++) {

        while (!dq.empty() && dq.back().first <= arr[i]) {
            dq.pop_back();
        }
        dq.push_back (make_pair (arr[i], i));


        while (!dq.empty() && dq.front().second <= i - k) {
            dq.pop_front();
        }

        if (i >= k - 1)
            printf ("%d ", dq.front().first);

    }
    puts ("");
}







int main(){
    int i, j;
    while (scanf ("%d %d", &n, &k) == 2){
        for (i = 0; i < n; i++)
            scanf ("%d",&arr[i]);
        //int len = sizeof(arr) / sizeof(arr[0]);
       // printf ("Len = %d\n", len);
        slide_minx();
        slide_maxn ();
    }
    return 0;
}




/*void slide_minx (){
    int i, j, lim, a, b, tmp, rear_elem, front_elem;
    std::deque <int> dq(k);
    for (i = 0; i < k; i++){
        rear_elem = dq.back();
        //printf ("Rear_Ele = %d\n", rear_elem);
        while (dq.empty () == false && arr[i] <= arr[rear_elem]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (; i < n; i++){
        front_elem = dq.front();
        //printf ("Rear_Ele = %d\n", rear_elem);

        printf ("%d ", arr[front_elem]);

        lim = i - k;
       // printf ("LIM = %d\n", lim);
        while (dq.empty () == false && front_elem <= lim){
            dq.pop_front();
        }

        rear_elem = dq.back();

        while (dq.empty () == false && arr[i] <= arr[rear_elem]){
            dq.pop_back();
        }

        dq.push_back (i);
    }
    printf ("%d\n", arr[dq.front()]);
}



void slide_maxn (){
    int i, j, lim, a, b, tmp, rear_elem, front_elem;
    std::deque <int> dq(k);
    for (i = 0; i < k; i++){
        rear_elem = dq.back();
        //printf ("Rear_Ele = %d\n", rear_elem);
        while (dq.empty () == false && arr[i] >= arr[rear_elem]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (; i < n; i++){
        front_elem = dq.front();
        //printf ("Rear_Ele = %d\n", rear_elem);

        printf ("%d ", arr[front_elem]);

        lim = i - k;
       // printf ("LIM = %d\n", lim);
        while (dq.empty () == false && front_elem <= lim){
            dq.pop_front();
        }

        rear_elem = dq.back();

        while (dq.empty () == false && arr[i] >= arr[rear_elem]){
            dq.pop_back();
        }

        dq.push_back (i);
    }
    printf ("%d\n", arr[dq.front()]);

}



}*/



