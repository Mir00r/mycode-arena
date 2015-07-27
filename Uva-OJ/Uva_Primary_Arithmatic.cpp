#include <stdio.h>

int main (){
    long long int a, b, mod1, mod2, flag, add, carry;
    scanf ("%lld%lld", &a, &b);
    while (a != 0 && b != 0){
        carry = 0;
        flag = 0;

        while (a > 0 || b > 0){
            mod1 = a % 10;
            a = a / 10;
            mod2 = b % 10;
            b = b / 10;

            add = mod1 + mod2 + flag;

            if (add >= 10){
                flag = 1;
                carry += 1;
            }
            else
                flag = 0;
        }

        if (carry == 0)
            printf ("No carry operation.\n");
        else if (carry == 1)
            printf ("%lld carry operation.\n", carry);
        else if (carry > 1)
            printf ("%lld carry operations.\n", carry);
        scanf ("%lld%lld", &a, &b);
    }
    return 0;
}



/*#include <iostream>
using namespace std;

int main()
{
long int a, b, c , _a, _b, result, carry;


while (cin >> a >> b)
{
    if ( a == 0 && b == 0)
        break;
    carry = c = 0;
    while (a != 0 || b != 0)
    {
        _a = a % 10;
        a = a / 10;
        _b = b % 10;
        b = b / 10;

        result = _a + _b + c;
        if (result >= 10)
        {
            c=1;
            carry += 1;
        }
        else
        c=0;
    }

    if (carry == 0)
    {
        cout << "No carry operation." << endl;
    }
    else if (carry == 1)
    {
        cout << carry << " carry operation." << endl;
    }
    else if (carry > 1)
    {
        cout << carry << " carry operations." << endl;
    }
}

    return 0;
}
*/
