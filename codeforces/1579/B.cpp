#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[100],l[100],r[100],d[100],k,p;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i++)
        {
            if(ara[i]<ara[i-1])
            {
                p=1;
                while(ara[i]<ara[i-p] && i-p>=0)
                {
                    p++;
                }
                l[k]=i+1-(p-1);
                r[k]=i+1;
                d[k]=p-1;
                k++;
            }
            sort(ara,ara+i+1);
        }
        cout<<k<<"\n";
        for(i=0;i<k;i++)
            cout<<l[i]<<" "<<r[i]<<" "<<d[i]<<"\n";
    }
    return 0;
}
