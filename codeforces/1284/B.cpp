#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long che[100005],l[100005],h[100005],u[100005];

int main()
{
    fastio;
    long long n,le,i,j,p,sum=0,x,low,high,mid,ch=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        p=0;
        l[i]=INT_MAX;
        h[i]=INT_MIN;
        cin>>le;
        for(j=0;j<le;j++)
        {
            cin>>x;
            if(j>0 && x>l[i])
                che[i]=1;
            l[i]=min(l[i],x);
            h[i]=max(h[i],x);
        }
    }
    for(i=0;i<n;i++)
    {
        if(che[i]==1)
            ch++;
        else
        {
            u[c]=h[i];
            c++;
        }
    }
    sort(u,u+c,greater<long long>());
    //cout<<ch;
    for(i=0;i<n;i++)
    {
        //cout<<sum<<"\n";
        if(che[i]==1)
        {
            sum+=n;
            continue;
        }
        if(u[c-1]>l[i])
        {
            sum+=n;
            continue;
        }
        if(u[0]<=l[i])
        {
            sum+=ch;
            continue;
        }
        low=0;
        high=c-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(u[mid]>l[i] && u[mid+1]<=l[i])
            {
                sum+=mid+1;
                break;
            }
            else if(u[mid]>l[i])
                low=mid+1;
            else
                high=mid-1;
        }
        sum+=ch;
    }
    cout<<sum<<"\n";
    return 0;
}
