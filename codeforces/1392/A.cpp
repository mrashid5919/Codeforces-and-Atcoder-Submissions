#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long t,n,i,p;
    static long long ara[200003];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1])
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"1"<<"\n";
        else
            cout<<n<<"\n";
    }
    return 0;
}
