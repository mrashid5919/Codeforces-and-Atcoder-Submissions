#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,h[105],i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>h[i];
        while(k--)
        {
            if(p==-1)
                break;
            for(i=0;i<n;i++)
            {
                if(i==n-1)
                {
                    p=-1;
                    break;
                }
                if(h[i]<h[i+1])
                {
                    p=i+1;
                    h[i]++;
                    break;
                }
            }
        }
        cout<<p<<"\n";
    }
    return 0;
}
