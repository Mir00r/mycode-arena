#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 32
#define col 32
#define MAX 3006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777

bool check_time (int wfs, int wfe, int offs, int offe){

    if (wfs > offe || wfe < offs)
    //  if (wfs > offe && wfe > offs)

        return true;

    return false;
}



int main(){
    int n, i, j, cs=1;
    int wf_sh, wf_sm, wf_eh, wf_em, tot_wfst, tot_wfet;
    int off_sh, off_sm, off_eh, off_em, tot_ofst, tot_ofet;

    scanf ("%d", &n);

    while (n--){
        scanf ("%d:%d %d:%d", &wf_sh, &wf_sm, &wf_eh, &wf_em);
        scanf ("%d:%d %d:%d", &off_sh, &off_sm, &off_eh, &off_em);

        tot_wfst = (wf_sh * 60) + wf_sm;
        tot_wfet = (wf_eh * 60) + wf_em;


        tot_ofst = (off_sh * 60) + off_sm;
        tot_ofet = (off_eh * 60) + off_em;


      //  printf ("%d     %d      %d      %d\n", tot_wfst, tot_wfet, tot_ofst, tot_ofet);


        printf ("Case %d: ", cs++);
        if (check_time (tot_wfst, tot_wfet, tot_ofst, tot_ofet))
            puts ("Hits Meeting");
        else
            puts ("Mrs Meeting");

    }

    return 0;
}
