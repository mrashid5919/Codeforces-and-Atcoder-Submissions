#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[100005],a,b,c,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        a=0;
        b=0;
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]%3==0)
                a++;
            else if(ara[i]%3==1)
                b++;
            else
                c++;
        }
        while(a!=n/3 || b!=n/3 || c!=n/3)
        {
            if(a>n/3)
            {
                b+=(a-n/3);
                sum+=(a-n/3);
                a=n/3;
            }
            if(b>n/3)
            {
                c+=(b-n/3);
                sum+=(b-n/3);
                b=n/3;
            }
            if(c>n/3)
            {
                a+=(c-n/3);
                sum+=(c-n/3);
                c=n/3;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
