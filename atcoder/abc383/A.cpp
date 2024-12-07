#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t[105],n,v[105],cur=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>v[i];
        if(i==0)
            cur=v[i];
        else
        {
            if(t[i]-t[i-1]>=cur)
                cur=0;
            else
                cur-=t[i]-t[i-1];
            cur+=v[i];
        }
    }
    cout<<cur<<"\n";
    return 0;
}