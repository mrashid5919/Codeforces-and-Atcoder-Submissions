// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b)
        cout<<a+b+2*c<<"\n";
    else if(a>b)
    {
        if(a==b+1)
            cout<<a+b+2*c<<"\n";
        else
            cout<<2*b+2*c+1<<"\n";
    }
    else
    {
        cout<<2*a+2*c+1<<"\n";
    }
    return 0;
}