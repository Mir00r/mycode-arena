#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 105
#define col 105
#define MAX 100000 + 5
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255


struct ListNode {
    int val;
    ListNode *next;
};

//struct ListNode *head;


bool IsPallindrome ( ListNode *head ) {
    ListNode* pal = head;
    stack < int > st;

    while ( pal != NULL ) {
        st.push ( pal->val );
        pal = pal->next;
    }

    pal = head;

    while ( st.empty() == false ) {
        int Top = st.top();
        st.pop();

        if ( pal->val != Top )
            return false;
        pal = pal->next;
    }
    return true;
}

//struct Node* head;

ListNode* Insert ( ListNode* head, int n ){

	struct ListNode* tmp = ( ListNode*)malloc( sizeof (struct ListNode) );
	tmp->val = n;
//	tmp->next = head;
//	if ( head != NULL ) tmp->next = head;
	head = tmp;

	return head;
}


int main () {
    ListNode* head = NULL;
    int data;
    scanf ("%d", &data);

    head = Insert( head, data );

    if ( IsPallindrome( head ) )
        puts ("It's Pallindrome");
    else
        puts ("Well it's not Pallindrome");

    return 0;
}
