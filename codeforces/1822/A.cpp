#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,q,i,a[75],b[75],p,mx,idx;
    cin>>t;
    while(t--)
    {
        mx=-1;
        cin>>n>>q;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        p=0;
        for(i=0;i<n;i++)
        {
            if(i+a[i]<=q)
            {
                p=1;
                if(b[i]>mx)
                {
                    mx=b[i];
                    idx=i;
                }
            }
        }
        if(p==1)
            cout<<idx+1<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
