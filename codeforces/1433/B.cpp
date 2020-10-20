#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[55],sum,c,p;
    cin>>t;
    while(t--)
    {
        sum=0;
        c=0;
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(ara[i]==0 && ara[i-1]==1)
            {
                p=1;
                c++;
            }
            else if(ara[i]==0 && p==1)
            {
                c++;
            }
            else if(ara[i]==1 && p==1)
            {
                sum=sum+c;
                c=0;
                p=0;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
