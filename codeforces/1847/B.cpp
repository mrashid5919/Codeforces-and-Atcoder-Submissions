#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,cnt,mn,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
                mn=ara[i];
            else
                mn=mn&ara[i];
        }
        if(mn!=0)
        {
            cout<<1<<"\n";
            continue;
        }
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
                x=ara[i];
            else
            {
                x=x&ara[i];
            }
            if(x==0)
            {
                cnt++;
                if(i==n-1)
                    break;
                x=ara[i+1];
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}