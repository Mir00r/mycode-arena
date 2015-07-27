#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999
#define row 101
#define col 101

int main(){
    int member, i, j, mem_cnt, song_cnt, tmp;
    char family[row][col];
    char song[row][col] = {"Happy","birthday","to","you","Happy","birthday",
    "to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

    scanf ("%d", &member);
    for(i = 0; i < member; i++) scanf ("%s", family[i]);
    mem_cnt = song_cnt = 0;
    if (member > 16) tmp = ceil(member/16) + 1;
    else tmp = 1;
    for (j = 0; j < tmp*16; j++){
        if(mem_cnt == member) mem_cnt = 0;
        if (song_cnt == 16) song_cnt = 0;
        printf ("%s: %s\n", family[mem_cnt], song[song_cnt]);
        mem_cnt++;
        song_cnt++;
    }
    return 0;
}
