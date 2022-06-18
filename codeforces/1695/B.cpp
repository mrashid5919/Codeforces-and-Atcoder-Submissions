#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[100],mn,idx;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(n%2==1)
        {
            cout<<"Mike"<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]<mn)
            {
                mn=ara[i];
                idx=i;
            }
        }
        if(idx%2==0)
            cout<<"Joe\n";
        else
            cout<<"Mike\n";
    }
    return 0;
}
