#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,cnt,sm,x;
    cin>>t;
    while(t--)
    {
        sm=0;
        cin>>n;
        vector<long long> pr;
        for(i=1;;i*=2)
        {
            //cout<<(1<<i)<<endl;
            if(i>n)
            {
                break;
            }
            if((n&i)!=0)
            {
                pr.push_back(i);
                sm+=i;
            }
        }
        if(pr.size()==1)
        {
            cout<<1<<"\n"<<n<<"\n";
            continue;
        }
        cnt=pr.size();
        sm-=pr[cnt-1];
        cout<<cnt+1<<"\n";
        vector<long long> alt;
        for(i=0;i<cnt;i++)
        {
            if(i<2)
            {
                alt.push_back(pr[i]);
            }
            else
            {
                alt.push_back(pr[i]+alt[i-2]);
            }
        }
        cout<<sm<<" ";
        x=0;
        for(i=cnt-1;i>=0;i--)
        {
            cout<<x+alt[i]<<" ";
            x+=pr[i];
        }
        cout<<"\n";
    }
    return 0;
}