#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

struct ob
{
    long long val;
    long long cnt;
};

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,m,i,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cin>>k;
        for(i=0;i<k;i++)
            cin>>b[i];
        queue<ob> q;
        for(i=0;i<n;i++)
        {
            long long temp=ara[i];
            while(temp%m==0)
                temp/=m;
            if(i==0)
            {
                ob x;
                x.val=temp;
                x.cnt=ara[i]/temp;
                q.push(x);
            }
            else
            {
                if(temp==q.back().val)
                    q.back().cnt+=ara[i]/temp;
                else
                {
                    ob x;
                    x.val=temp;
                    x.cnt=ara[i]/temp;
                    q.push(x);
                    //cout<<q.back().val<<"\n";
                }
            }
        }
        long long flag=0;
        for(i=0;i<k;i++)
        {
            if(q.empty())
            {
                flag=1;
                break;
            }
            if(b[i]%q.front().val!=0)
            {
                flag=1;
                break;
            }
            long long tmp=b[i]/q.front().val;
            //cout<<q.front().val<<" "<<tmp<<q.front().cnt<<"\n";
            long long p=tmp;
            while(p%m==0)
                p/=m;
            if(p!=1)
            {
                flag=1;
                break;
            }
            if(tmp>q.front().cnt)
            {
                flag=1;
                break;
            }
            if(tmp==q.front().cnt)
                q.pop();
            else
                q.front().cnt-=tmp;
        }
        if(!q.empty())
        {
            flag=1;
        }
        if(flag==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
