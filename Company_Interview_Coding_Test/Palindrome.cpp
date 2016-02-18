#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795

// Check Palindrome Number

int main(){
  int n, num, digit, rev = 0;
     printf ("Enter a positive number:");
     scanf ("%d", &num);
     n = num;
     do{
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     }while (num != 0);

     printf ("The reverse of the number is: %d\n", rev);
     if (n == rev)
       puts ("The number is Palindrome");
     else
       puts ("The number is not Palindrome");

    return 0;
}


// Check Palindrome String 

int main(){
   char a[100], b[100];
 
   printf("Enter the string to check if it is a palindrome\n");
   gets(a);
 
   strcpy(b, a);
   strrev(b);
 
   if (strcmp(a, b) == 0)
      printf("Entered string is a palindrome.\n");
   else
      printf("Entered string is not a palindrome.\n");
 
   return 0;
}


// Check palindrome without using string functions
int main(){
   char text[100];
   int begin, middle, end, length = 0;
 
   gets(text);
 
   while (text[length] != '\0')
      length++;
 
   end = length - 1;
   middle = length / 2;
 
   for (begin = 0; begin < middle; begin++){
      if (text[begin] != text[end]){
         printf("Not a palindrome.\n");
         break;
      }
      end--;
   }
   if (begin == middle)
      printf("Palindrome.\n");
 
   return 0;
}


// another way 

bool IsPalindrome(const string& str){
    if (str.empty())
        return false;

    int i = 0;                // first characters
    int j = str.length() - 1; // last character

    while (i < j){
        if (str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
