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
#define MAX 100005
#define row 100
#define col 100

typedef pair <int, int> jora;
deque <jora> dq;

int arr[MAX], n, k;


void slide (){
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


int main(){
    int i, j, cnt, tmp, ans, check, a, b;
    while (scanf ("%d %d", &n, &k) == 2){
        for (i = 0; i < n; i++)
            scanf ("%d",&arr[i]);
        //int len = sizeof(arr) / sizeof(arr[0]);
       // printf ("Len = %d\n", len);
        slide();
    }
    return 0;
}



/*

const int N = 500005;
int a[N];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque <pair <int, int> > window;

    for (int i = 0; i < n; i++) {
        // from the back of deque, if the value of last element is greater or equal than a[i]
        // then keep poping the elements.
        // Invariant : deque always remains sorted.
        // Important property due to which this trick works, is that the popped numbers are useless
        // in the next iteration as they are not longer can affect minimum.

        while (!window.empty() && window.back().first >= a[i]) {
            window.pop_back();
        }
        window.push_back (make_pair (a[i], i));

        // Now from the front of deque, pop all the elements which were out of our window.

        while (!window.empty() && window.front().second <= i - k) {
            window.pop_front();
        }

        if (i >= k - 1)
            cout << window.front().first << " ";
    }

    return 0;
}

*/



/*void slide (){
    int i, j, maxn;
    int lim = n - k + 1;
    for (i = 1; i <= lim; i++){
        maxn = arr[i];
        //printf ("Max = %d\n", maxn);
        for (j = 1; j < k; j++){
            if (arr[i+j] < maxn)
                maxn = arr[i+j];
        }
        printf ("Res = %d ", maxn);
        //puts ("");
    }
    puts ("");
}*/



/*void slide (){
    int i, j, a, b, lim;
    for (i = 1; i <= n; i++){
        if (dq.empty ()){
            dq.push_front(jora (arr[i], i));

            //puts ("OK");
           // printf("dq = %d\n", arr[i]);
        }else{
            if (i > k)
                printf("%d ", dq.front().first);
            a = dq.front().second;
            lim = i - k;
           // if (dq.front().first < arr[i])
                while (a <= lim){
                    dq.pop_front();
                    a = dq.front().second;
                }
               b = dq.back().first;
               if (arr[i] < b)
        }
    }
}*/


