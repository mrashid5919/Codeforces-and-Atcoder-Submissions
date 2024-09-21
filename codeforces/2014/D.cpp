#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,d,k,i,l,r,mx,mn,mxidx,mnidx,cur;
    cin>>t;
    while(t--)
    {
        cin>>n>>d>>k;
        map<long long,long long> st,en;
        while(k--)
        {
            cin>>l>>r;
            st[l-1]++;
            en[r-1]++;
        }
        mx=0; mn=0; cur=0;
        for(i=0;i<d;i++)
        {
            cur+=st[i];
            if(i>0) cur-=en[i-1];
        }
        mx=cur; mn=cur;
        mxidx=1; mnidx=1;
        for(i=d;i<n;i++)
        {
            cur+=st[i];
            cur-=en[i-d];
            if(cur>mx)
            {
                mx=cur;
                mxidx=i-d+2;
            }
            if(cur<mn)
            {
                mn=cur;
                mnidx=i-d+2;
            }
        }
        cout<<mxidx<<" "<<mnidx<<"\n";
    }
    return 0;
}