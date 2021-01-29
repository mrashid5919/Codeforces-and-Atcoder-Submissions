#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,p[105],i,sum,mn,temp,temp2;
    cin>>t;
    while(t--)
    {
        sum=0;
        mn=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>p[i];
        for(i=1;i<n;i++)
        {
            sum+=p[i-1];
            if((p[i]*100)%sum==0)
                temp=(p[i]*100)/sum;
            else
                temp=(p[i]*100)/sum+1;
            //cout<<sum<<" "<<temp<<"\n";
            if(temp>k)
            {
                if((p[i]*100)%k==0)
                    temp2=(p[i]*100)/k;
                else
                    temp2=(p[i]*100)/k+1;
                mn=mn+(temp2-sum);
                sum=temp2;
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}
