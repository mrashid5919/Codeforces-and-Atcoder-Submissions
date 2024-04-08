#include<bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];
 
int main()
{
    fastio;
    long long t,n,k,i,l,r,cnt,sum,st;
    cin>>t;
    while(t--)
    {
        cnt=0;
        sum=0;
        st=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(k>=sum)
        {
            cout<<n<<"\n";
            continue;
        }
        l=0;
        r=n-1;
        while(k>0)
        {
            //cout<<k<<"\n";
            if(l==r)
            {
                if(k>=ara[l])
                    cnt++;
                break;
            }
            else if(st==0)
            {
                if(ara[l]<=ara[r])
                {
                    if(k>=2*ara[l]-1)
                    {
                        cnt++;
                        ara[r]-=ara[l]-1;
                        k-=2*ara[l]-1;
                        l++;
                        st=1;
                    }
                    else
                        break;
                }
                else
                {
                    if(k>=2*ara[r])
                    {
                        cnt++;
                        ara[l]-=ara[r];
                        k-=2*ara[r];
                        r--;
                    }
                    else
                        break;
                }
            }
            else
            {
                if(ara[r]<=ara[l])
                {
                    if(k>=2*ara[r]-1)
                    {
                        cnt++;
                        ara[l]-=ara[r]-1;
                        k-=2*ara[r]-1;
                        r--;
                        st=0;
                    }
                    else
                        break;
                }
                else
                {
                    if(k>=2*ara[l])
                    {
                        cnt++;
                        ara[r]-=ara[l];
                        k-=2*ara[l];
                        l++;
                    }
                    else
                        break;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}