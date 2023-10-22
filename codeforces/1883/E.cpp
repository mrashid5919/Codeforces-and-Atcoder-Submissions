#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],pr[100005],ex[100005];

int main()
{
    fastio;
    long long t,n,i,cnt,d,x;
    pr[0]=1;
    for(i=1;i<=60;i++)
        pr[i]=pr[i-1]*2;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        ex[0]=0;
        for(i=1;i<n;i++)
        {
            if(ara[i]>ara[i-1])
            {
                d=ara[i]/ara[i-1];
                long long low=0,high=40,mid;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(d>=pr[mid] && d<pr[mid+1])
                    {
                        x=mid;
                        break;
                    }
                    else if(d>=pr[mid])
                        low=mid+1;
                    else
                        high=mid-1;
                }
                ex[i]=max(0LL,ex[i-1]-x);
                cnt+=ex[i];
            }
            else if(ara[i]==ara[i-1])
            {
                ex[i]=ex[i-1];
                cnt+=ex[i];
            }
            else
            {
                d=ara[i-1]/ara[i];
                long long low=0,high=40,mid;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(d>=pr[mid] && d<pr[mid+1])
                    {
                        if(ara[i]*pr[mid]==ara[i-1])
                            x=mid-1;
                        else
                            x=mid;
                        //cout<<x<<"\n";
                        break;
                    }
                    else if(d>=pr[mid])
                        low=mid+1;
                    else
                        high=mid-1;
                }
                ex[i]=ex[i-1]+x+1;
                cnt+=ex[i];
            }
            // if(ara[i]<ara[i-1])
            // {
            //     unsigned long long low,high,mid;
            //     low=1;
            //     high=60;
            //     while(low<=high)
            //     {
            //         mid=(low+high)/2;
            //         if(ara[i]*pr[mid]>=ara[i-1] && ara[i]*pr[mid-1]<ara[i-1])
            //         {
            //             cnt+=mid;
            //             ara[i]*=pr[mid];
            //             break;
            //         }
            //         else if(ara[i]*pr[mid]>=ara[i-1])
            //             high=mid-1;
            //         else
            //             low=mid+1;
            //     }
            // }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}