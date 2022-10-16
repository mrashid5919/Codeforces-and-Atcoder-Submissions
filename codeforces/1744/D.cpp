#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],p[200005];

int main()
{
    fastio;
    long long t,n,i,cnt,flag;
    cin>>t;
    while(t--)
    {
        cnt=0;
        flag=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(i=0;i<n;i++)
        {
            while(ara[i]%2==0)
            {
                cnt++;
                ara[i]/=2;
                if(cnt==n)
                    break;
            }
            if(cnt==n)
                break;
        }
        if(cnt==n)
            cout<<0<<"\n";
        else
        {
            for(i=2;i<=n;i+=2)
            {
                long long x=0,y=i;
                while(y%2==0)
                {
                    x++;
                    y/=2;
                }
                p[i/2-1]=x;
            }
            sort(p,p+n/2,greater<long long>());
            for(i=1;i<n/2;i++)
                p[i]+=p[i-1];
            if(p[n/2-1]<n-cnt)
                cout<<-1<<"\n";
            else if(p[0]>=n-cnt)
                cout<<1<<"\n";
            else
            {
                int low=1;
                int high=n/2-1;
                while(low<=high)
                {
                    int mid=(low+high)/2;
                    if(p[mid]>=n-cnt && p[mid-1]<n-cnt)
                    {
                        cout<<mid+1<<"\n";
                        break;
                    }
                    else if(p[mid]>=n-cnt)
                        high=mid-1;
                    else
                        low=mid+1;
                }
            }
        }
    }
    return 0;
}
