#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[105],ma,mb,co[105];
    cin>>t;
    while(t--)
    {
        for(i=0; i<102; i++)
            co[i]=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            co[ara[i]]++;
        }
        if(co[0]==0)
        {
            cout<<0<<"\n";
            continue;
        }

        for(i=0; i<102; i++)
        {
            if(co[i]==0)
            {
                ma=i;
                break;
            }
            if(co[i]>0)
                co[i]--;
        }
        for(i=0; i<102; i++)
        {
            if(co[i]==0)
            {
                mb=i;
                break;
            }
        }
        cout<<ma+mb<<"\n";

    }
    return 0;
}
