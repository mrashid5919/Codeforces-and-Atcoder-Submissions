#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,a[1005],b[1005],mn=INT_MAX;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                mn=min(mn,a[i]+b[i]);
            else
                mn=min(mn,max(a[i],b[j]));
        }
    }
    cout<<mn<<"\n";
    return 0;
}
