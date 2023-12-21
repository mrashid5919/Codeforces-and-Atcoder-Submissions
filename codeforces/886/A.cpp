#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int i,j,k,ara[12],sm=0,p=0;
    for(i=0;i<6;i++)
    {
        cin>>ara[i];
        sm+=ara[i];
    }
    if(sm%2==1)
    {
        cout<<"NO\n";
        return 0;
    }
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            for(k=j+1;k<6;k++)
            {
                if(ara[i]+ara[j]+ara[k]==sm/2)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            break;
    }
    if(p==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}