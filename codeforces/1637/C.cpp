#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,c,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i>0 && i<n-1 && ara[i]==1)
                c++;
        }
        if(n==3 && ara[1]%2==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(c==n-2)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=1;i<n-1;i++)
            sum+=ara[i]/2+ara[i]%2;
        cout<<sum<<"\n";
    }
    return 0;
}
