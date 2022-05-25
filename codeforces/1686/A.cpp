#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[100],sum,p;
    cin>>t;
    while(t--)
    {
        p=0;
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        for(i=0;i<n;i++)
        {
            if(sum-ara[i]==(n-1)*ara[i])
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
