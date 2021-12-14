#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,ara[10],a,b,c,i,j,p;
    cin>>t;
    while(t--)
    {
        p=0;
        for(i=0;i<7;i++)
            cin>>ara[i];
        a=ara[0];
        for(i=1;i<6;i++)
        {
            if(p==1)
                break;
            for(j=i+1;j<6;j++)
            {
                if(ara[i]+ara[j]==ara[6]-a)
                {
                    b=ara[i];
                    c=ara[j];
                    p=1;
                    break;
                }
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";

    }
    return 0;
}
