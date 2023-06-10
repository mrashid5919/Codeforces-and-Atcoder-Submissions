#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%5<3)
        cout<<n-n%5<<"\n";
    else
        cout<<n+(5-n%5)<<"\n";
    return 0;
}