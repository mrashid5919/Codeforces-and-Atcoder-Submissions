#include <bits/stdc++.h>
using namespace std;

int main() {
    long long q,a,b,c,x;
    cin>>q>>a>>b>>c;
    x=q%(a+b+c);
    if(x<a)
        cout<<"F";
    else if(x<a+b)
        cout<<"M";
    else
        cout<<"T";
    return 0;
}