// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

long long ara[200005];

int main() {
    // Write C++ code here
    long long n,i,ev=0,od=0,evcur,odcur;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    od=ara[0];
    for(i=1;i<n;i++)
    {
        evcur=od+2*ara[i];
        odcur=ev+ara[i];
        ev=max(ev,evcur);
        od=max(od,odcur);
    }
    cout<<max(ev,od)<<"\n";
    return 0;
}