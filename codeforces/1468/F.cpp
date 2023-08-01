#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[100005],b[100005];

int main()
{
    fastio;
    long long t,n,x,y,u,v,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        map<pair<long long,long long>,long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>x>>y>>u>>v;
            //cout<<__gcd(u-x,v-y)<<"\n";
            if(x==u)
            {
                a[i]=0;
                if(v>=y)
                    b[i]=1;
                else
                    b[i]=-1;
            }
            else if(y==v)
            {
                b[i]=0;
                if(u>=x)
                    a[i]=1;
                else
                    a[i]=-1;
            }
            else
            {
                long long g=__gcd(abs(u-x),abs(v-y));
                a[i]=(u-x)/g;
                b[i]=(v-y)/g;  
            }
            //cout<<a[i]<<" "<<b[i]<<"\n";
            mp[{a[i],b[i]}]++;
        }
        for(i=0;i<n;i++)
            cnt+=mp[{(-1)*a[i],(-1)*b[i]}];
        cout<<cnt/2<<"\n";
    }
    return 0;
}