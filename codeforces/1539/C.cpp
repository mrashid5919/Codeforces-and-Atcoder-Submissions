#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long n,k,x,i,cnt=1;
    cin>>n>>k>>x;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    vector<long long> dif;
    for(i=1;i<n;i++)
    {
            if(ara[i]-ara[i-1]>x)
            {
                cnt++;
                if((ara[i]-ara[i-1])%x==0)
                {
                    dif.push_back((ara[i]-ara[i-1])/x-1);
                }
                else
                {
                    dif.push_back((ara[i]-ara[i-1])/x);
                }
            }
    }
    sort(dif.begin(),dif.end());
    for(i=0;i<dif.size();i++)
    {
        if(dif[i]<=k)
        {
            cnt--;
            k-=dif[i];
        }
        else
            break;
    }
    cout<<cnt<<"\n";
    return 0;
}
