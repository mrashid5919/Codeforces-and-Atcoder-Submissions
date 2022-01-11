//Took help
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[100],p,x;
    cin>>t;
    while(t--)
    {
        p=0;
        long long checked[100]={0};
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            while(ara[i]>0)
            {
                if(ara[i]<=n && checked[ara[i]]==0)
                {
                    checked[ara[i]]=1;
                    break;
                }
                ara[i]/=2;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(checked[i]==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
