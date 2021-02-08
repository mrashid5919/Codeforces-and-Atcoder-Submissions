#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,high,low,mid,a,b,count;
    static long long ara[100005]={0},ans[100005];
    ara[0]=1;
    ara[1]=1;
    for(i=4;i<=100000;i+=2)
        ara[i]=1;
    for(i=3;i*i<=100000;i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i;j<=100000;j+=i)
            {
                ara[j]=1;
            }
        }
    }
    count=0;
    for(i=2;i<=100000;i++)
    {
        if(ara[i]==0)
        {
            ans[count]=i;
            count++;
            //cout<<ans[count]<<" ";
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        low=0;
        high=count-1;
        a=0;
        b=0;
        if(n==1)
        {
            cout<<6<<"\n";
            continue;
        }
        else
        {
            while(low<=high)
            {
                mid=(low+high)/2;
                //cout<<high<<"\n";
                if(ans[mid]>n && ans[mid-1]<=n)
                {
                    a=ans[mid];
                    break;
                }
                else if(ans[mid]<=n)
                    low=mid+1;
                else
                    high=mid-1;
            }
            low=mid+1;
            high=count-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(ans[mid]-a>=n && ans[mid-1]-a<n)
                {
                    b=ans[mid];
                    break;
                }
                else if(ans[mid]-a<n)
                    low=mid+1;
                else
                    high=mid-1;
            }
            //cout<<a<<" "<<b;
            cout<<a*b<<"\n";
        }
    }
    return 0;
}
