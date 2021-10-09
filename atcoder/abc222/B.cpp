#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[100005];

int main()
{
    fastio;
    int n,p,i,count=0;
    cin>>n>>p;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]<p)
            count++;
    }
    cout<<count;
    return 0;
}
