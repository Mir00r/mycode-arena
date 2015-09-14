#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>
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


// Class use techniqe




class Student {
    private:
        int age, standard;
        string first_name, last_name;

    public:
        void set_age (int Age){
            age = Age;
        }
        int get_age (){
            return age;
        }

       void set_standard (int Standard){
            standard = Standard;
        }
        int get_standard (){
            return standard;
        }


       void set_first_name (string first){
            first_name = first;
        }
        string get_first_name (){
            return first_name;
        }


        void set_last_name (string last){
            last_name = last;
        }
        string get_last_name (){
            return last_name;
        }

        string to_string (){
            /*std::cout << get_age() << ",";
            std::cout << get_first_name() << ", " << get_last_name() << ",";
            std::cout << get_standard() << "\n";*/

           /*
            std::stringstream buff;
            buff << age << ',' << first_name <<',' <<last_name<< ',' << standard;
            string str=buff.str();*/
            //return;

            stringstream ss;

            ss<<age<<','<<first_name<<','<<last_name<<','<<standard;
            string str = ss.str();
            return str;


        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    std::cout << st.to_string();

    return 0;
}




/*

// string Picking way

vector<int> parseInts(string str) {
    vector <int> vt;
    stringstream ss (str);
    int i;

    while (ss >> i){
        vt.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }

    return vt;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

*/

/*
// pointer

void update(int *a, int *b) {
    // Complete this function
    *a = *a + *b;
    *b = abs (*a - *b - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



*/
