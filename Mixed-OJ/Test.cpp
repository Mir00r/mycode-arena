#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define row 100
#define col 100
#define MAX 1001
#define getchar_unlocked() getchar()






int main()
{
    //char ara[100];
    string ara;

    int i,j=0;
 //   gets(ara);
//    int len=strlen(ara);
    int len;
   // while(gets(ara)){
      while (cin >> ara){
          //len=strlen(ara);
          len = ara.length ();

        for(i=0;i<len;i++){
            if(ara[i]=='A'||ara[i]=='B'||ara[i]=='C'){
                ara[i]=2;
            }
            else if(ara[i]=='D'||ara[i]=='E'||ara[i]=='F'){
                ara[i]=3;
            }
            else if(ara[i]=='G'||ara[i]=='H'||ara[i]=='I'){
                ara[i]=4;
            }
            else if(ara[i]=='J'||ara[i]=='K'||ara[i]=='L'){
                ara[i]=5;
            }
            else if(ara[i]=='M'||ara[i]=='N'||ara[i]=='O'){
                ara[i]=6;
            }
            else if(ara[i]=='P'||ara[i]=='Q'||ara[i]=='R'||ara[i]=='S'){
                ara[i]=7;
            }
            else if(ara[i]=='T'||ara[i]=='U'||ara[i]=='V'){
                ara[i]=8;
            }
            else if(ara[i]=='W'||ara[i]=='X'||ara[i]=='Y'||ara[i]=='Z'){
                ara[i]=9;
            }

            }
        }
        for ( i=0;i<len;i++){
            if(ara[i]=='0'||ara[i]=='1'||ara[i]=='2'||ara[i]=='3'||ara[i]=='4'||ara[i]=='5'||ara[i]=='6'||ara[i]=='7'||ara[i]=='8'||ara[i]=='9'||ara[i]=='-'){
                printf("%c",ara[i]);
            }
            else{
            printf("%d",ara[i]);
            }
    }
    return 0;
}





/*int arr[MAX], n;

int quick(int left, int right) //quicksort takes an array, the leftmost index and the rightmost index
{
	  int comparison = 0;
      int i = left;
	  int j = right;
	  int tmp;
	  int pivot = arr[(left + right) / 2];


      // partition
      while (i <= j) {
			comparison++;
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      // recursion
      if (left < j)
            quick(left, j);
      if (i < right)
            quick(i, right);

	  return comparison;
}

int main(){
    int i, j, cnt, ans;
    while (scanf ("%d", &n) == 1){

        for (i = 0; i < n; i++) scanf ("%d", &arr[i]);

        ans = quick (0, n-1);
        printf ("%d\n", ans);

//        for (i = 0; i < n; i++) printf ("%d ", arr[i]);
//        NL;
    }
    return 0;
}


*/









/*
int main() {
	string color = "ROYGBIV";
	int n, i, ans;
	scanf ("%d", &n);
	for (i = 7; i < n; i++){
	    //puts ("OK");
        color += color[i-4];
        //cout << color;
	}
	cout << color << endl;
	return 0;
}
*/



/*typedef long long LL;
using namespace std;

inline LL read() //faster input for integer
{
	LL n = 0;
	register char c = getchar_unlocked();//register is used due to its repeated use
	while (!('0' <= c && c <= '9'))
 	{
  		c = getchar_unlocked();
 	}
 	while ('0' <= c && c <= '9')
	{
  	n = (n<<3) + (n<<1) +  c - '0';//equivalent to n = n*10 + c - 48;
  	c = getchar_unlocked();
	}
 return n;
}

int flag[MAX]={},primes[168],count=0;
//initiall everything hold 0,means they are prime


void primeBuilder(){
	int i,j;
	flag[0] = 1;
	flag[1] = 1;
	//0 and 1 are not prime
	for(i=2;i<=sqrt(MAX);i++){
		if(!flag[i]){
			for(j=i*2;j<MAX;j=j+i)
			flag[j]=1;
		}
	}
	for(i=2;i<MAX;i++)
	if(!flag[i])
	{
		//cout<<i<<" ";
		primes[::count++]=i;
	}
	//cout<<::count<<endl;
	//cout<<endl;
}


int main(){
	primeBuilder();
	int test;
	scanf("%d",&test);
	while(test--){
		LL N,i,arr[1000],k=0,A,j;
		N = read();
		for(i = 0; i < N; i++){
			A = read();
			j = 0;
			while( (A >= primes[j] ) && (j < 168) ){
				while(A % primes[j] == 0)
				{
					arr[k] = primes[j];
					k++;
					//printf ("Prime = %d\n", primes[j]);

					A /= primes[j];
				}
				j++;
			}
			if(A != 1){
				arr[k] = A;
				k++;
			}
		}

		sort(arr, arr + k);
		LL prev =-1, cnt = 0, ans = 1;

		for(i = 0; i < k; i++){
			//printf ("Arr = %d ", arr[i]);
			if(prev != arr[i])
			{
				ans *= (cnt+1);
				cnt = 1;
				prev = arr[i];

               // printf ("Ans = %d\n", ans);
			}
			else
				cnt++;
           // printf ("Cnt = %d\n", cnt);
		}
		puts ("");
		printf("%lld\n",ans*(cnt+1));
	}
//	getchar();
	return 0;
}
*/
