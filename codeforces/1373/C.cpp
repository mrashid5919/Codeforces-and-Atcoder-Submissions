#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[1000005];

int main()
{
    fastio;
    long long t,n,i,sum,mn,prev;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0;
        mn=INT_MAX;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(s[i]=='+')
                    ara[i]=1;
                else
                    ara[i]=-1;
            }
            else if(s[i]=='+')
                ara[i]=ara[i-1]+1;
            else
                ara[i]=ara[i-1]-1;
            mn=min(mn,ara[i]);
        }
        if(mn>=0)
        {
            cout<<n<<"\n";
            continue;
        }
        mn=mn*(-1);
        long long c=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]<(-1)*c)
            {
                if(c==0)
                    sum+=(i+1)*(mn-c);
                else
                {
                    sum+=(i-prev)*(mn-c);
                }
                prev=i;
                //cout<<sum<<"\n";
                c++;
            }
        }
        sum+=n;
        cout<<sum<<"\n";
    }
    return 0;
}
