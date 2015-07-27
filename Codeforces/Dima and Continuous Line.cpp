#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 10000+10

//int n, arr[MAX];

int main(){
    int a, b, c, d, x, y, i, j, ans, tmp, flag;
    int n, arr[MAX];
    while (scanf ("%d", &n) == 1){
        flag = 0;
        x = y = 0;
        for (i = 1; i <= n; i++) scanf ("%d", &arr[i]);
        for (i = 1; i <= n; i++){
            x = y = 0;
            for (j = i+2; j <= n; j++)
                if (arr[j] > arr[i] && arr[j] > arr[i+1] || arr[j] < arr[i] && arr[j] < arr[i+1]){
                    //printf ("yes\n");
                    //return 0;
                    //flag = 1;
                    //break;
                    x++;
                }
                else{
                    y++;
                    //flag = 0;
                    //break;
                }
            if (x != 0 && y != 0) break;
        }
        if (x != 0 && y != 0) printf ("yes\n");
        else
        printf ("no\n");
        //printf ("no\n");
        //return 0;
    }
    return 0;
}

/*for(i=1;i<n;i++)
for(int j=1;j<n;j++){
    x=a[i];y=a[i+1];z=a[j];t=a[j+1];
    if(x>t&&t>y&&y>z||x>z&&z>y&&y>t||
       z>x&&x>t&&t>y||t>x&&x>z&&z>y||
       x<t&&t<y&&y<z||x<z&&z<y&&y<t||
       z<x&&x<t&&t<y||t<x&&x<z&&z<y)
    {abc=1;break;}
}*/


/*
If our line has self-intersections, that some pair of semi-circles exists, which intersect each other.
Let points x1 < x2 are connected with a semi-circle and points x3 < x4 are connected with another semi-circle.
Then this semis-circles intersect if one of the conditions is true:

1). x1<x3<x2<x4
2). x3<x1<x4<x2

Let’s iterate trough all pairs of semi-circles, and check if the semi-circles intersect each other. So,
the solution will have complexity O(N2) what satisfied the constrains.

*/
