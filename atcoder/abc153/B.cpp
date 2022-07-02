#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,h,sum=0;
    cin>>h>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum>=h)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
