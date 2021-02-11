#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,a,b;
    static long long ara[200005];
    cin>>t;
    while(t--)
    {
        a=0;
        b=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<long long>());
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(ara[i]%2==0)
                    a+=ara[i];
            }
            else if(ara[i]%2==1)
                b+=ara[i];
        }
        if(a>b)
            cout<<"Alice"<<"\n";
        else if(b>a)
            cout<<"Bob"<<"\n";
        else
            cout<<"Tie"<<"\n";
    }
    return 0;
}
