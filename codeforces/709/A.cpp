#include <bits/stdc++.h>
using namespace std;

long long ara[100005];

int main() {
    long long n,b,d,i,cnt=0,sum=0;
    cin>>n>>b>>d;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]<=b)
            sum+=ara[i];
        if(sum>d)
        {
            cnt++;
            sum=0;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}