#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,l,r,i,chk,a,b,c,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            //cout<<i<<"\n";
            if(i%2==0)
                continue;
            if(i%2==1)
            {
                if(r-i>=2)
                {
                    cnt++;
                    i+=3;
                }
                else
                    break;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}