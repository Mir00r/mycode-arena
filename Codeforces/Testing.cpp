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
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 55
#define col 55
#define MAX 100000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

int n, m;
char grid[row][col];

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};







/*

bool check_cor (int rw, int cl){
    if (rw >= 0 && rw < n && cl >= 0 && cl < m)
        return true;

    return false;
}

int bfs (int x, int y){
    int cnt, ax, ay, i, u, v, res;

    queue <jora> Q;
    Q.push (jora (x, y));

    //mark[x][y] = true;

    while (Q.empty () == false){
        jora top = Q.front ();

        x = top.first;
        y = top.second;
        Q.pop ();

        cnt = res = 0;


        for (i = 0; i < 4; i++){
            ax = x + X_arr[i];
            ay = y + Y_arr[i];

            if ( check_cor (ax, ay) ){
                if ( grid[ax][ay] == 'f' ||  grid[ax][ay] == 'a' || grid[ax][ay] == 'c' || grid[ax][ay] == 'e' ){
                    cnt++;
                    Q.push (jora (ax, ay));
                }

            }

            if (cnt == 4){
                res++;
                cnt = 0;
            }

        }
    }
    return res;
}


int main (){
    int i, j, ans, cnt = 0, res=0;
    int a, b, sum=0;


    scanf ("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        scanf ("%s", grid[i]);

    ans = bfs (0, 0);
    printf ("%d\n", ans);

    return 0;
}
*/



/*
//
//    for (i = 0; i < n; i++){
//        for (j = 0; j < m; j++){
//            if ( grid[i][j] == 'f' ||  grid[i][j] == 'a' || grid[i][j] == 'c' || grid[i][j] == 'e' ){
//                    //cnt++;
//                   // printf ("%d     %d\n", i, j);
//                sum += (i + j);
//            }
//
////            if ( sum % 4 == 0)
////                res++;
//        }
//
//        if (sum % 4 == 0){
//            res++;
//            sum = 0;
//        }
//
//    }
//    printf ("Sum = %d\n", sum);

//    printf ("%d\n", sum / 4);

int n, m, mat[row][col], q;

void change (int x, int y){
    int i, j;

    if (mat[x][y] == 1)
        mat[x][y] = 0;
    else
        mat[x][y] = 1;
}


int get_ans (int x){
    int i, j, cnt=0;

//    for (i = 1; i <= x; i++)
        for (j = 1; j <= m; j++)
            if (mat[x][j] == 1)
                cnt++;
    return cnt;
}


int main(){
    int i, j, k, cnt, tmp, ans;

    scanf ("%d %d %d", &n, &m, &q);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            scanf ("%d", &mat[i][j]);

    while (q--){
        int x, y;
        scanf ("%d %d", &x, &y);
        change (x, y);

        printf ("%d\n", get_ans (x));

    }

    return 0;
}


*/



/*
bool is_pali (string st){
    int i, j, len;
    bool check = false;

    len = st.length();

    for (i = 0; i < len / 2; i++){
        if (st[i] != st[len-1-i]){
            check = true;
            break;
        }
    }

    if (!check)
        return true;
    else
        return false;

}


int main (){
    int k, len, i, j, ans, x, y;
    string str, a, b;
    bool check = false;
    set <int> st;
    cin >> str;
    scanf ("%d", &k);

    len = str.length();

    int tmp = len / k;
//
//    for (i = 0; i < tmp; i++)
//        a += str[i];
//
//    for (i = tmp; i < len; i++)
//        b += str[i];

    for (i = 0; i < len; i++ ){
        a += str[i];
        //x = a.length();

//        if (x == tmp ){
//            if (is_pali (a)){
//                check = true;
//                break;
//            }
//        }
        if (is_pali (a)){
            int c = a.length();
            k--;
            //break;
            st.insert (c);
            memset (a, '\0', sizeof (a));
//            if (k == 0){
//                check = true;
//                break;
//            }
        }

    }

    if ( k == 0 && st.size() == 1 )
        puts ("YES");
    else
        puts ("NO");

    st.clear();
//    x = a.length();
//    y = b.length();

    //cout << a << endl << b << endl;

//    if ( ( is_pali (a) && is_pali (b) ) && x == y)
//        puts ("YES");
//    else
//        puts ("NO");


    return 0;
}

*/

/*
int main(){

      char st[20];
      int flag=0,i,l;

       printf("enter any string\n");

        gets(st);
       l = strlen(st);

      for(i = 0; i < l/2; i++)
         if(st[i] != st[l-1-i])
         {
            flag=1;
            break;
         }

        if(flag==0)
            printf("String is Palindrom");
        else
            printf("String is not palindrom\n");
    return 0;
}
*/






/*
string s,t,x[31][31];
int n,m,k,i,j,a,b,o,r;


int main(){
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

    cin>>n>>m>>k;

    for (o = 1; o <= k; o++){
        cin>>s;

        if (s[0]=='+'){

            cin >> a >> b >> t;

            while (1){
                if (x[a][b] == ""){
                    x[a][b] = t;
                    break;
                }
                else {
                    b++;
                    if (b > m){
                        a++;
                        b = 1;
                        if (a > n)
                            break;
                    }
                }
            }
        }
        else {
            cin >> t;
            r = 0;
            for (i = 1; i <= n; i++){
                if (r == 1)
                    break;

                for (j = 1; j <= m; j++){

                    if (x[i][j] == t){
                        r = 1;
                        break;
                    }

                }
            }
            if (r == 0){
                cout<<-1<<" "<<-1<<endl;
            }

            else {
                cout<<i-1<<" "<<j<<endl;
                x[i-1][j] = "";
            }
        }

    }

    return 0;
}


*/







/*int main(){
    int a[1001]={0}, n, i, j, k;
    char c;
    scanf("%d%c", &k, &c);
    a[k]=1;

    while(c == ','){
        puts ("ok");
        scanf("%d%c", &k, &c);
        a[k]=1;
        //printf ("%d\n", a[k]);
    }
    i = 1;

    while(a[i] == 0 && i < 1001){
        puts ("Iok");
        i++;
    }
    j = i;
    //printf ("%d\n", j);
    while(a[j] == 1 && j < 1001){
        puts ("Jpk");
        j++;
    }
    j--;
  //  printf ("%d\n", j);
    if(i-j == 0) printf("%d", i);
    else printf("%d-%d", i, j);

    i = j+1;
    while(i < 1001){
       // puts ("pakka");
        while(a[i] == 0 && i < 1001)
          i++;
        if(i == 1001) break;
        j = i;
        while(a[j] == 1 && j < 1001)
          j++;
        j--;
        if(i-j == 0)printf(",%d", i);
        else printf(",%d-%d", i, j);
        i = j+1;
      }
      printf("\n");
}

*/













/*map <string, int> mp;
int main(){
    string goru;
    while( cin >> goru ) {
        if( goru == "moro" ) break;
        mp[ goru ] ++;
        cout << goru <<" ase " << mp[ goru ] << " ta :D " << endl;
    }
    return 0;
}




int main(){
    int n , arr[MAX], i, maxn;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i< n; i++) scanf ("%d", &arr[i]);

        maxn = inf;
        for (i=0; i < n; i++){
            if (arr[i] % 2 != 0){
                if (arr[i] < maxn){
                    maxn = arr[i];
                    printf ("%d ", maxn);
                }
            }
        }
        NL;
    }
    return 0;
}


*/



/*int cal (LLI x){
    LLI mod, div, tmp, mul =1;
    tmp = x;
    while (tmp > 0){
        mod = tmp % 10;
        //printf ("Mod = %d\n", mod);
        if (mod > 4 && tmp != 9){
            x -= (mod - 9 + mod) * mul;
          //  printf ("X = %d\n", x);
        }
        mul *= 10;
        tmp /= 10;
        //  printf("Tmp = %d\n", tmp);
    }
    return x;
}


int main(){
    LLI ans, tmp, mod, mul=1;
    scanf ("%I64d", &n);
    //ans = cal (n);
    tmp = n;
    while (tmp > 0){
        mod = tmp % 10;
        //printf ("Mod = %d\n", mod);
        if (mod > 4 && tmp != 9){
            n -= (mod - 9 + mod) * mul;
          //  printf ("X = %d\n", x);
        }
        mul *= 10;
        tmp /= 10;
        //  printf("Tmp = %d\n", tmp);
    }

    printf ("%I64d\n", n);

    return 0;
}
*/

