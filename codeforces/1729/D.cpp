#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long x[100005],y[100005],dif[100005];

int main()
{
    fastio;
    long long t,n,i,l,r,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        for(i=0;i<n;i++)
            cin>>x[i];
        for(i=0;i<n;i++)
        {
            cin>>y[i];
            dif[i]=y[i]-x[i];
        }
        sort(dif,dif+n);
        l=0;
        r=n-1;
        while(l<r)
        {
            if(dif[l]+dif[r]>=0)
            {
                cnt++;
                l++;
                r--;
            }
            else
                l++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
