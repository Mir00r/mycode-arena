#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 999
#define row 50
#define col 50

//char bus[100][100] = {"+------------------------+",
  //                  "|O.O.O.#.#.#.#.#.#.#.#.|D|)"};

string bus[100] = {"+------------------------+",
                    "|#.#.#.#.#.#.#.#.#.#.#.|D|)",
                    "|#.#.#.#.#.#.#.#.#.#.#.|.|",
                    "|#.......................|",
                    "|#.#.#.#.#.#.#.#.#.#.#.|.|)",
                    "+------------------------+"};

int main (){
    //int ans = sizeof (bus[0]);
//    int ans, i;
//    for (i = 0; i < bus[i].size(); i++){
//        ans = bus[i].size();
//        printf ("%d\n", ans);
//    }
    int k, i, j, cnt, tmp, ans;
    scanf ("%d", &k);
    for (i = 0; i < 26; i++){
        for (j = 0; j < 6 && k > 0; j++){
            if (bus[j][i] == '#') bus[j][i] = 'O';
            else continue;
        k--;
        }
        //k--;
    }
    for (i = 0; i < 6; i++) cout << bus[i] << endl;
    return 0;
}
