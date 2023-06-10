#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    getline(cin,x);
    char p=x[0];
    char q=x[2];
    int ara[7]={0,3,4,8,9,14,23};
    cout<<abs(ara[p-'A']-ara[q-'A'])<<"\n";
    return 0;
}