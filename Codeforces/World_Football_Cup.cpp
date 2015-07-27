#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 35

//typedef pair <char, char> jora;
//map <jora, jora> mp;

int missed[MAX], points[MAX], score[MAX];
string t_name[MAX];

void sum_point (int p, int q){
    if (p > q) points[ai] += 3;
    else if (p < q) points[bi] += 3;
    else{
        points[ai]++;
        points[bi]++;
    }
}

int main(){
    int n, j, i, cnt, ans, check, tmp;
    char ch;
    int goal_1, goal_2;
    string matces, a, b;
    int ai, bi;
    //getchar ();
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        cin >> t_name[i];

    tmp = n * (n-1) / 2;
    //gets (ch);
    for (i = 0; i < tmp; i++){
        cin >> matces >> goal_1 >> ch >> goal_2;
        a = matces.substr (0, matces.find('-'));
        cout << a << endl:
        b = matces.substr (matces.find('-') + 1);
        cout << b << endl;
        ai = find (t_name, t_name+n, a) - t_name;
        printf ("Ai = %d\n", ai);
        bi = find (t_name, t_name+n, b) - t_name;
        printf ("Bi = %d\n", bi);
        sum_point(goal_1, goal_2);

    }
    return 0;
}
