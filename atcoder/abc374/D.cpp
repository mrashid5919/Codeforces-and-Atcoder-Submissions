#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[20], a[20],b[20],c[20],d[20];

int main() {
    fastio;
    double x, y, ans;
    long long n, s, t, i, j,p=0;
    
    
    cin >> n >> s >> t;
    
    
    for(i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i] >> d[i];

    
    for(i = 0; i < n; i++)
        ara[i] = i;

    
    do {
        for(i=0;i<(1<<n);i++)
        {
            x=0.0,y=0.0;
            for(j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    if(j==0)
                    {
                        if(a[ara[0]]!=0 || b[ara[0]]!=0)
                            y+=sqrt(a[ara[0]]*a[ara[0]]+b[ara[0]]*b[ara[0]]);
                    }
                    else
                    {
                        if(i&(1<<(j-1)))
                        {
                            y+=sqrt((c[ara[j-1]]-a[ara[j]])*(c[ara[j-1]]-a[ara[j]])+(d[ara[j-1]]-b[ara[j]])*(d[ara[j-1]]-b[ara[j]]));
                        }
                        else
                        {
                            y+=sqrt((a[ara[j-1]]-a[ara[j]])*(a[ara[j-1]]-a[ara[j]])+(b[ara[j-1]]-b[ara[j]])*(b[ara[j-1]]-b[ara[j]]));
                        }
                    }
                    x+=sqrt((c[ara[j]]-a[ara[j]])*(c[ara[j]]-a[ara[j]])+(d[ara[j]]-b[ara[j]])*(d[ara[j]]-b[ara[j]]));
                }
                else
                {
                    if(j==0)
                    {
                        if(c[ara[0]]!=0 || d[ara[0]]!=0)
                            y+=sqrt(c[ara[0]]*c[ara[0]]+d[ara[0]]*d[ara[0]]);
                    }
                    else
                    {
                        if(i&(1<<(j-1)))
                        {
                            y+=sqrt((c[ara[j-1]]-c[ara[j]])*(c[ara[j-1]]-c[ara[j]])+(d[ara[j-1]]-d[ara[j]])*(d[ara[j-1]]-d[ara[j]]));
                        }
                        else
                        {
                            y+=sqrt((a[ara[j-1]]-c[ara[j]])*(a[ara[j-1]]-c[ara[j]])+(b[ara[j-1]]-d[ara[j]])*(b[ara[j-1]]-d[ara[j]]));
                        }
                    }
                    x+=sqrt((c[ara[j]]-a[ara[j]])*(c[ara[j]]-a[ara[j]])+(d[ara[j]]-b[ara[j]])*(d[ara[j]]-b[ara[j]]));
                }
            }
            if(p==0){
                ans=(double)x/t+(double)y/s;
                p=1;
            }
            else
                ans=min(ans,(double)x/t+(double)y/s);
            // if(ara[0]==1 && ara[1]==0 && ara[2]==2 && i==2)
            //     cout<<x<<" "<<y<<" "<<ans<<"\n";
        }
    } while (next_permutation(ara, ara + n));
    cout<<setprecision(10)<<ans<<"\n";
    return 0;
}
