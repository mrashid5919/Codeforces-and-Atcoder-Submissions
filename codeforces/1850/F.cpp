#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],sv[200005],cnt[200005];

int main()
{
    fastio;
    long long t,n,i,j,mx,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long> vect;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sv[i]=0;
        }
        sv[n]=0;
        sort(ara,ara+n);
        vect.push_back(ara[0]);
        cnt[0]=1;
        m=1;
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1]){
                vect.push_back(ara[i]);
                m++;
                cnt[m-1]=1;
            }
            else
                cnt[m-1]++;
        }
        mx=0;
        for(i=0;i<m;i++)
        {
            if(vect[i]>n)
                break;
            for(j=vect[i];j<=n;j+=vect[i])
                sv[j]+=cnt[i];
        }
        for(i=1;i<=n;i++)
            mx=max(mx,sv[i]);
        cout<<mx<<"\n";
    }
    return 0;
}