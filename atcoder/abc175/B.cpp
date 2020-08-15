#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long n,i,j,k,sum=0,high,low,mid,p;
    static long long ara[103];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(ara[i]==ara[j])
                continue;
            else
            {
                for(k=j+1;k<n;k++)
                {
                    if(ara[j]==ara[k])
                        continue;
                    else
                    {
                        low=k;
                        high=n-1;
                        p=0;
                        while(low<=high)
                        {
                            mid=(low+high)/2;
                            if(ara[mid]>=ara[i]+ara[j] && ara[mid-1]<ara[i]+ara[j])
                            {
                                sum=sum+mid-k;
                                p=1;
                                break;
                            }
                            else if(ara[mid]<ara[i]+ara[j])
                                low=mid+1;
                            else if(ara[mid]>=ara[i]+ara[j])
                                high=mid-1;
                        }
                        if(p==0)
                            sum=sum+n-k;
                        break;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
