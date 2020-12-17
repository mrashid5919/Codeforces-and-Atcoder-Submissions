#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[55],s,sb;
    cin>>t;
    while(t--)
    {
        s=0;
        sb=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i%2==0)
                s+=ara[i];
            else
                sb+=ara[i];
        }
        if(s>=sb)
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<<ara[i]<<" ";
                else
                    cout<<1<<" ";
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i%2==1)
                    cout<<ara[i]<<" ";
                else
                    cout<<1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
