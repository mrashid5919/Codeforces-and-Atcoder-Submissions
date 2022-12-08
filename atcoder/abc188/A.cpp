#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(max(a,b)-min(a,b)<3)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}