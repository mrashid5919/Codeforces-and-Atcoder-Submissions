//Took help
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,p,a,b;
    cin>>t;
    while(t--)
    {
        p=0;
        a=0;
        b=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]%2==0)
            {
                if(ara[i]>=a)
                    a=ara[i];
                else
                {
                    p=1;
                    break;
                }
            }
            else
            {
                if(ara[i]>=b)
                    b=ara[i];
                else
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
