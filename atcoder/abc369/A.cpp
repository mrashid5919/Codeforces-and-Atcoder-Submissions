#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<1<<"\n";
    else if(abs(a-b)%2==0)
        cout<<3<<"\n";
    else
        cout<<2<<"\n";
    return 0;
}