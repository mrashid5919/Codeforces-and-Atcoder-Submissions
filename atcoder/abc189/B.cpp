#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,x,i,v[1005],p[1005],q=0,s=0;
    cin>>n>>x;
    for(i=0;i<n;i++)
        cin>>v[i]>>p[i];
    for(i=0;i<n;i++)
    {
        s=s+v[i]*p[i];
        if(s/100>x)
        {
            cout<<i+1<<"\n";
            q=1;
            break;
        }
        else if(s/100==x)
        {
            if(s%100!=0)
            {
                cout<<i+1<<"\n";
                q=1;
                break;
            }
        }
    }
    if(q==0)
        cout<<-1<<"\n";
    return 0;
}
