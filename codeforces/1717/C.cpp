#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[200005],b[200005];

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(b[(i+1)%n]<b[i]-1 && b[i]!=a[i])
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
