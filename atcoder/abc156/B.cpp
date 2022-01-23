#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,count=0;
    cin>>n>>k;
    while(n!=0)
    {
        n=n/k;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}