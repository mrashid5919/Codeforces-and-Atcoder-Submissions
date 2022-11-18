#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,m,s,i,j,ara[100],sum,p;
    cin>>t;
    while(t--)
    {
        cin>>m>>s;
        sum=0;
        p=0;
        for(i=0;i<m;i++)
            cin>>ara[i];
        sort(ara,ara+m);
        sum=(ara[0]*(ara[0]-1))/2;
        for(i=1;i<m;i++)
        {
            if(ara[i]==ara[i-1])
            {
                p=1;
                break;
            }
            else if(ara[i]>ara[i-1]+1)
            {
                for(j=ara[i-1]+1;j<ara[i];j++)
                    sum+=j;
            }
        }
        if(p==1 || sum>s)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(sum==s)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        for(i=ara[m-1]+1;;i++)
        {
            sum+=i;
            if(sum==s)
            {
                p=0;
                break;
            }
            if(sum>s)
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
