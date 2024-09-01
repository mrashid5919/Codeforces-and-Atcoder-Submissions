#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

//char ara[1005][1005];

int main()
{
    fastio;
    long long t,n,i,j,p,sq;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        p=0;
        sq=sqrt(n);
        if(sq*sq!=n)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<sq;i++)
        {
            for(j=0;j<sq;j++)
            {
                if(i==0 || j==0 || i==sq-1 || j==sq-1)
                {
                    if(s[i*sq+j]=='0')
                    {
                        p=1;
                        break;
                    }
                }
                else if(s[i*sq+j]=='1')
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}