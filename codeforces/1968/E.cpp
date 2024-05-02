#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,j,x[1005],y[1005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<n;i++)
        {
            if(i!=(n/2))
            {
                x[i]=1;
                y[i]=i;
            }
            else
            {
                x[i]=i;
                y[i]=1;
            }
        }
        x[n]=n;
        y[n]=n;
        // set<long long> st;
        // for(i=1;i<n;i++)
        // {
        //     for(j=i+1;j<=n;j++)
        //     {
        //         st.insert(abs(x[i]-x[j])+abs(y[i]-y[j]));
        //     }
        // }
        // cout<<st.size()<<"\n";
        for(i=1;i<=n;i++)
            cout<<x[i]<<" "<<y[i]<<"\n";
    }
    return 0;
}