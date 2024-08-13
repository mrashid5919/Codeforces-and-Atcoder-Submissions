#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],l[200005],r[200005],pr[200005];

int main()
{
    fastio;
    long long t,n,i,mx,lc,rc;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mx=0; lc=0; rc=0;
        for(i=0;i<n;i++){
            cin>>ara[i];
            if(i==0)
                pr[i]=ara[i];
            else
                pr[i]=pr[i-1]+ara[i];
        }
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                l[++lc]=i;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='R')
            {
                r[++rc]=i;
            }
        }
        //cout<<lc<<" "<<rc<<endl;
        if(lc==0 || rc==0)
        {
            cout<<0<<"\n";
            continue;
        }
        // for(i=1;i<=lc;i++)
        //     cout<<l[i]<<" ";
        // cout<<endl;
        // for(i=1;i<=rc;i++)
        //     cout<<r[i]<<" ";
        // cout<<endl;
        for(i=1;i<=min(lc,rc);i++)
        {
            if(l[i]>r[i])
                break;
            else
            {
                if(l[i]==0)
                    mx+=pr[r[i]];
                else
                    mx+=pr[r[i]]-pr[l[i]-1];
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}