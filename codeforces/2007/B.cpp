#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,m,i,mx,l,r;
    char op;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        mx=0;
        for(i=0;i<n;i++){
            cin>>ara[i];
            mx=max(mx,ara[i]);
        }
        for(i=0;i<m;i++)
        {
            cin>>op;
            cin>>l>>r;
            if(op=='+')
            {
                if(mx>=l && mx<=r)
                    mx++;
            }
            else
            {
                if(mx>=l && mx<=r)
                    mx--;
            }
            cout<<mx<<" ";
        }
        cout<<"\n";
    }
    return 0;
}