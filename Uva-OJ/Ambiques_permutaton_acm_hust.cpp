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
#define MAX 100001

int main(){
    int arr[MAX], tmp_arr[MAX], n, i, tmp;
    while(1){
        bool flag = true;
        scanf("%d", &n);
        if (n == 0) break;
        for (i = 1; i <= n; i++){
            scanf("%d", &tmp);
            arr[i] = tmp;
            tmp_arr[arr[i]] = i;
        }
        for (i = 1; i <= n; i++)
            if (arr[i] != tmp_arr[i]){
                flag = false;
                break;
            }
            if (flag == false)
                printf("not ambiguous\n");
            else
                printf("ambiguous\n");
    }
    return 0;
}

/*int n, i, j, tmp, count;
    bool flag = true;
    vector <int> arr[MAX];
    scanf ("%d", &n);
    while (n != 0){
        for (i = 0; i < n; i++){
            scanf ("%d", &tmp);
            arr[tmp].push_back(i);
        }
       // const auto len = arr.size();//int len = arr.size();
        for (j = 0; j < n; j++){
            if(arr[arr[j]-1] != (j+1)){
                flag = false;
                printf ("not ambiguous\n");
                break;
            }
        }
        if (flag == true)
            printf ("ambiguous\n");
        scanf ("%d", &n);*/
