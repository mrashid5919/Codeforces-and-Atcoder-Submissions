#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[50005],b[50005];

int main()
{
    fastio;
    long long t,n,i,flag,p,dif;
    cin>>t;
    while(t--)
    {
        flag=0;
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(b[i]!=0)
            {
                if(ara[i]<b[i])
                {
                    flag=1;
                    break;
                }
                if(p==0)
                {
                    dif=ara[i]-b[i];
                    p=1;
                }
                else if(ara[i]-b[i]!=dif)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(p==0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                if(ara[i]>dif)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
