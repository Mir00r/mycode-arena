#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 10000+10
#define eps 1e-9

struct node{
    int ned_to_brif, ned_to_job_sec;
}st_arr[MAX];

bool cmp(node a, node b){
    if (a.ned_to_job_sec > b.ned_to_job_sec) return true;
    return false;
}

int main(){
    int num_of_sol, i, j, brif, max, tmp, cs=0;
    while (scanf ("%d", &num_of_sol) == 1){
        if (num_of_sol == 0) break;
        for (i = 0; i < num_of_sol; i++) scanf ("%d%d", &st_arr[i].ned_to_brif, &st_arr[i].ned_to_job_sec);
        sort (st_arr, st_arr+num_of_sol, cmp);
        brif = 0, max = 0;
        for (j = 0; j < num_of_sol; j++){
            brif += st_arr[j].ned_to_brif;
            //printf ("Brife = %d\n\n", brif);
            tmp = brif + st_arr[j].ned_to_job_sec;
            //printf ("Temp = %d\n\n", tmp);
            if (tmp > max) max = tmp;
        }
        printf ("Case %d: %d\n", ++cs, max);
    }
    return 0;
}


/*struct node{
    int ned_to_brif, ned_to_job_sec;
}st_arr[MAX];

bool cmp(node i,node j){
    if(i.ned_to_job_sec > j.ned_to_job_sec) return true;
    return false;
}

int main(){
    int N, cs = 1;
    while(scanf("%d",&N),N){
        for(int i = 0; i < N; i++) scanf("%d%d", &(st_arr[i].ned_to_brif), &(st_arr[i].ned_to_job_sec));
        sort(st_arr, st_arr+N, cmp);
        int brif = 0, tmp, max_time = 0;
        for(int i = 0; i < N; i++){
            brif = brif + st_arr[i].ned_to_brif;
            tmp = brif + st_arr[i].ned_to_job_sec;

            if(tmp >= max_time) max_time = tmp;
        }
        printf("Case %d: %d\n",cs++ ,max_time);
    }
    return 0;
}*/
