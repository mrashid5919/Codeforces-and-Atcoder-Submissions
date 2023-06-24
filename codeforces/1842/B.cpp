#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[100005],b[100005],c[100005];

int main()
{
    fastio;
    long long t,n,x,i,p,q,r,j,flag,ans;
    cin>>t;
    while(t--)
    {
        p=-1;
        q=-1;
        r=-1;
        ans=0;
        cin>>n>>x;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(p==-1)
            {
                flag=0;
                for(j=0;(1<<j)<=a[i];j++)
                {
                    if((a[i]&(1<<j)) && (!(x&(1<<j))))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    p=i;
                else
                    ans|=a[i];
            }
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            if(q==-1)
            {
                flag=0;
                for(j=0;(1<<j)<=b[i];j++)
                {
                    if((b[i]&(1<<j)) && (!(x&(1<<j))))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    q=i;
                else
                    ans|=b[i];
            }
        }
        for(i=0;i<n;i++){
            cin>>c[i];
            if(r==-1)
            {
                flag=0;
                for(j=0;(1<<j)<=c[i];j++)
                {
                    if((c[i]&(1<<j)) && (!(x&(1<<j))))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    r=i;
                else
                    ans|=c[i];
            }
        }
        if(ans==x)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
