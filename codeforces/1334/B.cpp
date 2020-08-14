#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,x,r,sum,i;
    static long long ara[100002];
    cin>>t;
    while(t--)
    {
        sum=0;
        r=0;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum=sum+ara[i];
            if(ara[i]>=x)
                r++;
        }
        sort(ara,ara+n,greater<long long>());
        for(i=n;i>0;i--)
        {
            if(i==n)
            {
               if(sum/i>=x)
                r=max(r,i);
            }
            sum=sum-ara[i];
            if(sum/i>=x)
                r=max(r,i);
        }
        cout<<r<<endl;
    }
    return 0;
}
