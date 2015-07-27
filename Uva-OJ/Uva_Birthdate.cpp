#include <algorithm>
#include <stdio.h>
using namespace std;
struct person
{
    char name[32];
    int d, m, y;
    bool operator<(const person &p) const
    {
        return y < p.y || (y == p.y && (m < p.m || (m == p.m && d < p.d)));
    }
} p[128];
int main(void)
{
    int n, i;
    for(n; scanf("%d", &n) == 1;)
    {
        for(i = 0; i < n; ++i)
        scanf("%s %d %d %d", p[i].name, &p[i].d, &p[i].m, &p[i].y);
        sort(p, p + n);
        printf("%s\n%s\n", p[n - 1].name, p[0].name);
    }
    return 0;
}

// Code from logic


#include <stdio.h>
#include <string.h>
char str[20], yn_str[20], old_str[20];
int sm_yy = 0, sm_mm = 0, sm_dd = 0, big_yy = 5000, big_mm = 13, big_dd = 32;

void big(char str[], int yy, int mm, int dd);
void small(char str[], int yy, int mm, int dd);

int main ()
{
 int yy, mm, dd, t;
 scanf ("%d", &t);
 while (t--){
	scanf ("%s", str);
	scanf ("%d%d%d", &dd, &mm, &yy);
	big (str, yy, mm, dd);
	small (str, yy, mm, dd);
	//printf ("%s\n",old_str);
   //printf ("%s\n",yn_str);
  }
    printf ("%s\n", yn_str);
    printf ("%s\n", old_str);
 return 0;
}

void big(char str[], int yy, int mm, int dd)
{
    if (big_yy == yy && mm == big_mm && dd < big_dd){
	  big_dd = dd;
	  strcpy(old_str, str);
	 }
	else if (big_yy == yy && mm < big_mm){
	  big_mm = mm;
     big_dd = dd;
	  strcpy(old_str, str);
	}
    else if (yy < big_yy){
	  big_yy = yy;
	  big_dd = dd;
	  big_mm = mm;
	  strcpy(old_str, str);
	}
}

void small(char str[], int yy, int mm, int dd)
{
    if (sm_yy == yy && mm == sm_mm && dd > sm_dd){
	  sm_dd = dd;
	  strcpy(yn_str, str);
	 }
	else if (sm_yy == yy && mm > sm_mm){
	  sm_mm = mm;
     sm_dd = dd;
	  strcpy(yn_str, str);
	}
    else if (yy > sm_yy){
	  sm_yy = yy;
	  sm_dd = dd;
	  sm_mm = mm;
	  strcpy(yn_str, str);
	}
}



#include<stdio.h>
#include<string.h>
int main()
{
    int d,m,y,dd,mm,yy,T,sd,sm,sy;
    char ch[100],b[100],s[100];
    scanf("%d",&T);
    T=T-1;
    scanf("%s%d%d%d",ch,&d,&m,&y);
    sd=d; sm = m; sy = y;
    strcpy(s,ch);
    strcpy(b,ch);
    while(T--)
    {
        scanf("%s%d%d%d",ch,&dd,&mm,&yy);
        if(y<yy)
        {
            y=yy;
            strcpy(b,ch);
        }
        else if(sy>yy)
        {
            sy=yy;
            strcpy(s,ch);
        }
        else
        {
            if(m<mm)
            {
                m=mm;
                strcpy(b,ch);
            }
            else if(sm>mm)
            {
                sm=mm;
                strcpy(s,ch);
            }
            else
            {
                if(d<dd)
                {
                    d=dd;
                    strcpy(b,ch);
                }
                else if(sd>dd)
                {
                    sd=dd;
                    strcpy(s,ch);
                }
                else
                {
                    strcpy(b,ch);
                    strcpy(s,ch);
                }
            }
        }
    }
    puts(b);
    puts(s);
    return 0;
}
