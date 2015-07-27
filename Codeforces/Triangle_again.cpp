#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 5

int tri_dx[4] = {-1, 0, 1, 0};
int tri_dy[4] = {0, 1, 0, -1};

bool check_triangle (int x1, int y1, int x2, int y2, int x3, int y3){
    int a, b, c;
    a = ( (x1 - x2) * (x1 - x2)) + ( (y1 - y2) *  (y1 - y2));
    b = ( (x2 - x3) * (x2 - x3)) + ( (y2 - y3) *  (y2 - y3));
    c = ( (x3 - x1) * (x3 - x1)) + ( (y3 - y1) *  (y3 - y1));

    if (a > 0 && b > 0 && c > 0)
        if (a + b == c || b + c == a || c + a == b) return true;
    return false;
}

int main(){
    int x1, y1, x2, y2, x3, y3, i, j;
    //int ab, bc, ca, a, b, c;
    scanf ("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (check_triangle(x1, y1, x2, y2, x3, y3) == true){
        puts ("RIGHT");
        return 0;
    }
    else{
        for (i = 0; i< 4; i++){
            if (check_triangle(x1+tri_dx[i], y1+tri_dy[i], x2, y2, x3, y3) == true){
                puts ("ALMOST");
                return 0;
            }
        }
        for (i = 0; i< 4; i++){
            if (check_triangle(x1, y1, x2+tri_dx[i], y2+tri_dy[i], x3, y3) == true){
//            if (check_triangle(x2+tri_dx[i], y2+tri_dy[i], x1, y1, x3, y3) == true){
                puts ("ALMOST");
                return 0;
            }
        }
        for (i = 0; i< 4; i++){
            if (check_triangle(x1, y1, x2, y2, x3+tri_dx[i], y3+tri_dy[i]) == true){
            //if (check_triangle(x3+tri_dx[i], y3+tri_dy[i], x2, y2, x1, y1) == true){
                puts ("ALMOST");
                return 0;
            }
        }
    }
    puts ("NEITHER");
    return 0;
}
