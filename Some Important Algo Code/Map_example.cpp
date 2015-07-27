//map example is showing below..

#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    map<string,int> mp; //declare map as string,int pair
    map<string,int> ::iterator it; // declare iterator for iterate map.
    mp.insert(make_pair("shopnil",3));
    mp.insert(make_pair("tomal",1));
    mp.insert(make_pair("mahdi",10));

    // map stores value in sorted order according its key value
        // here string is key and int is value that means first element is key
        //second is value

    for(it=mp.begin();it!=mp.end();it++) // from start to end iteration
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    // find some value by its key;
    if(mp.find("tomal")!=mp.end()) // finding tomal from map
    {
        cout<<mp["tomal"]<<endl; // value of tomal
    }else cout<<"not found\n";

    return 0;
}
