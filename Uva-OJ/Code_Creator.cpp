#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 200
#define row 100
#define col 200

/*int main(){
    int t, cs=1, i, j, len, d = 1;
    char str[MAX][MAX];
    while(scanf ("%d", &t) == 1 && t){
        getchar();
        for (i = 0; i < t; i++){
            gets(str[i]);//scanf ("%s", str[i]);
            if (strlen(str[i]) == 0) gets(str[i]);//scanf ("%s", str[i]);
        }
        printf ("Case %d:\n", cs++);
        printf ("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
        for(i = 0; i < t; i++){
            printf ("printf(\"");
            len = strlen(str[i]);
            for(j = 0; j < len; j++){
               switch(str[i][j]){
                    case '"':
                        //printf ();
                        cout <<'\\'<< str[i][j];
                        break;
                    case '\\':
                        //printf ("//");
                        cout <<'\\'<< str[i][j];
                        break;
                    default:
                        //printf("%s", str[i][j]);
                        cout <<str[i][j];
                        break;
                }
            }
            printf( "\\n\");\n");
        }
        printf("printf(\"\\n\");\nreturn 0;\n}\n");
    }
    return 0;
}*/




int main(){
    int t, n, cs = 0, i, j, len, ans, tmp, cnt;
    char str[row][col];
    while (scanf ("%d", &n) == 1 && n){
        getchar();
        for (i = 0; i < n; i++){
            gets(str[i]); //scanf ("%s ", str[i]);
            if (strlen(str[i]) == 0) gets(str[i]);//scanf ("%s ", str[i]);
        }
        printf ("Case %d:\n", ++cs);
        printf ("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");

         for(i = 0; i < n; i++){
            printf ("printf(\"");
            len = strlen(str[i]);
            for(j = 0; j < len; j++){
                if (str[i][j] == '"') printf ("\\\"");
                else if (str[i][j] == '\\') printf ("\\\\");
                else putchar(str[i][j]);
            }
            printf( "\\n\");\n");
         }
        puts("printf(\"\\n\");\nreturn 0;\n}\n");
    }
    return 0;
}
