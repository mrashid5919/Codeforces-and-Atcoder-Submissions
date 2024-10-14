#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],M=1000000007,n[200005],k[200005];

int main() {
    fastio;
    ara[0]=1;
    for(long long i=1;i<=100000;i++)
        ara[i]=(ara[i-1]*2)%M;
    long long t,i;
    cin>>t;
    for(i=0;i<t;i++)
        cin>>n[i];
    for(i=0;i<t;i++)
        cin>>k[i];
    for(i=0;i<t;i++)
        cout<<ara[k[i]]<<"\n";
    return 0;
}