#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n,i;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i+=2)
    {
        cout<<s[i];
    }
    return 0;
}