#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long t,n,i,p;
    static long long ara[100002],b[100002];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            b[i]=ara[i];
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(ara[i]!=b[i])
            {
               if(ara[i]%b[0]!=0)
               {
                   p=1;
                   break;
               }
            }
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
