/*#include <stdio.h>

int main ()
{
    long int b1, b2, b3, c1, c2, c3, g1, g2, g3, bcg, cbg, cgb, gcb, gbc, bgc, minimize;
    while (scanf ("%ld%ld%ld%ld%ld%ld%ld%ld%ld", &b1, &b2, &b3, &g1, &g2, &g3, &c1, &c2, &c3) == 9)
    {
        bcg = 0, cbg = 0, cgb = 0, gcb = 0, gbc = 0, bgc = 0;
        bcg = b2 + b3 + c1 + c3 + g1 + g2;
        cbg = c2 + c3 + b1 + b3 + g1 + g2;
        cgb = c2 + c3 + g1 + g3 + b1 + b2;
        gcb = g2 + g3 + c1 + c3 + b1 + b2;
        gbc = g2 + g3 + b1 + b3 + c1 + c2;
        bgc = b2 + b3 + g1 + g3 + c1 + c2;
        minimize = bcg;

        if(cbg < minimize)
            minimize = cbg;
        if(cgb < minimize)
            minimize = cgb;
        if(gcb < minimize)
            minimize = gcb;
        if(gbc < minimize)
            minimize = gbc;
        if(bgc < minimize)
            minimize = bgc;

        if (minimize == bcg)
            printf ("BCG %ld\n", minimize);
        else if (minimize == cbg)
            printf ("CBG %ld\n", minimize);
        else if (minimize == cgb)
            printf ("CGB %ld\n", minimize);
        else if (minimize == gcb)
            printf ("GCB %ld\n", minimize);
        else if (minimize == gbc)
            printf ("GBC %ld\n", minimize);
        else
            printf ("BGC %ld\n", minimize);
    }
    return 0;
}*/

#include<stdio.h>

int main(){
    long int minimize, b1, g1, c1, b2, g2, c2, b3, g3, c3, bcg, bgc, cbg, cgb, gbc, gcb;
    while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) == 9){
        bcg = bgc = cbg = cgb = gbc = gcb = 0;
        bcg = b2 + b3 + c1 + c3 + g1 + g2;
        bgc = b2 + b3 + g1 + g3 + c1 + c2;
        cbg = c2 + c3 + b1 + b3 + g1 + g2;
        cgb = c2 + c3 + g1 + g3 + b1 + b2;
        gbc = g2 + g3 + b1 + b3 + c1 + c2;
        gcb = g2 + g3 + c1 + c3 + b1 + b2;
        minimize = bcg;
        if(bgc < minimize)
            minimize = bgc;
        if(cbg < minimize)
            minimize = cbg;
        if(cgb < minimize)
            minimize = cgb;
        if(gbc < minimize)
            minimize = gbc;
        if(gcb < minimize)
            minimize = gcb;
        if(bcg == minimize)
            printf("BCG %ld\n",minimize);
        else if(bgc == minimize)
            printf("BGC %ld\n",minimize);
        else if(cbg == minimize)
            printf("CBG %ld\n",minimize);
        else if(cgb == minimize)
            printf("CGB %ld\n",minimize);
        else if(gbc == minimize)
            printf("GBC %ld\n",minimize);
        else
            printf("GCB %ld\n",minimize);
    }
    return 0;
}
