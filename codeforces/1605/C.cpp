#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[1000005],b[1000005],c[1000005],aa[1000005];

int main()
{
    fastio;
    long long t,n,i,p,ac,bc,cc,mn;
    string s;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        cin>>n;
        cin>>s;
        p=0;
        ac=0;
        bc=0;
        cc=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                ac++;
                aa[ac-1]=i;
            }
            else if(s[i]=='b')
            {
                bc++;
            }
            else
            {
                cc++;
            }
            a[i]=ac;
            b[i]=bc;
            c[i]=cc;
        }
        if(ac<2)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=0;i<ac-1;i++)
        {
            if(b[aa[i+1]]-b[aa[i]]<2 && c[aa[i+1]]-c[aa[i]]<2)
            {
                p=1;
                mn=min(mn,aa[i+1]-aa[i]+1);
            }
        }
        if(p==1)
        {
            cout<<mn<<"\n";
            continue;
        }
        for(i=0;i<ac-2;i++)
        {
            if(b[aa[i+2]]-b[aa[i]]<3 && c[aa[i+2]]-c[aa[i]]<3)
            {
                p=1;
                mn=min(mn,aa[i+2]-aa[i]+1);
            }
        }
        if(p==1)
        {
            cout<<mn<<"\n";
            continue;
        }
        cout<<-1<<"\n";
    }
    return 0;
}
