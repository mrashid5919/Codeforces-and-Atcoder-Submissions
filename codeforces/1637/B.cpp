#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,ara[105],m[105],s[105],sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]>0)
                m[i]=0;
            else
                m[i]=1;
        }
        for(i=0;i<n;i++)
        {
           if(i==0)
            s[i]=m[i];
           else
            s[i]=s[i-1]+m[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(i==0)
                    sum+=(j-i+1)+s[j];
                else
                    sum+=(j-i+1)+s[j]-s[i-1];
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
