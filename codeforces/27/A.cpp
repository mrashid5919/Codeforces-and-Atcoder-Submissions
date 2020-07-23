#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ara[3002],p=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if(ara[i]!=1)
            {
                cout<<1;
                p=1;
                break;
            }
        }
        else
        {
            if(ara[i]!=ara[i-1]+1)
            {
                cout<<ara[i-1]+1;
                p=1;
                break;
            }
        }
    }
    if(p==0)
        cout<<n+1;
    return 0;
}
