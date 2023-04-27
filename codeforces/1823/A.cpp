#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,p,s,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        p=0;
        for(i=0;i<=n;i++)
        {
            s=(i*(i-1))/2+((n-i)*(n-i-1))/2;
            if(s==k)
            {
                p=1;
                cout<<"YES\n";
                for(j=0;j<i;j++)
                    cout<<1<<" ";
                for(j=0;j<n-i;j++)
                    cout<<-1<<" ";
                cout<<"\n";
                break;
            }
        }
        if(p==0)
            cout<<"NO\n";
    }
    return 0;
}
