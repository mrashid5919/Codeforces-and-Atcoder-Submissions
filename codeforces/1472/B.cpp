#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[105],a,b;
    cin>>t;
    while(t--)
    {
        a=0;
        b=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==1)
                a++;
            else
                b++;
        }
        if(a%2==0 && b%2==0)
            cout<<"YES\n";
        else if(a%2==0 && a>0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
