#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005],l[300005],r[300005];

int main()
{
    fastio;
    long long n,i,p=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    set<long long, greater<long long> > s;
    for(i=0;i<n;i++)
    {
        if(s.count(ara[i])==0)
        {
            s.insert(ara[i]);
            if(i==n-1)
                r[c-1]=i+1;
        }
        else
        {
            if(p==0)
            {
                p=1;
                l[0]=1;
                r[0]=i+1;
            }
            else
            {
                l[c]=r[c-1]+1;
                r[c]=i+1;
            }
            c++;
            s.clear();
        }
    }
    if(p==0)
        cout<<-1<<"\n";
    else
    {
        cout<<c<<"\n";
        for(i=0;i<c;i++)
            cout<<l[i]<<" "<<r[i]<<"\n";
    }
    return 0;
}
