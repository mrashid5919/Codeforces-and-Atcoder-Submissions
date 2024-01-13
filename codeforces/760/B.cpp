#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,k,mn,cnt,l,r,ad=1,sm;
    cnt=0;
    cin>>n>>m>>k;
    m-=n;
    l=k;
    r=k;
    if(m==0)
    {
        cout<<1<<"\n";
        return 0;
    }
    cnt++;
    mn=min(k-1,n-k);
    //cout<<mn<<"\n";
    //if(m<=(mn+1)*(mn+1))
    //{
        long long x=sqrtl(m);
        x=min(x,mn+1);
        cnt+=x;
        m-=x*x;
        if(x<mn+1)
        {
            cout<<cnt<<"\n";
            return 0;
        }
    //}
    //cout<<cnt<<"\n";
    //cout<<m<<"\n";
    long long low=2*(cnt-1)-1,high=n-1,mid;
    x=low;
    //cout<<(x*(x+1))/2<<"\n";
    if(m>=(n*(n+1))/2-(x*(x+1))/2)
    {
        m-=(n*(n+1))/2-(x*(x+1))/2;
        cnt+=n-low;
        cnt+=m/n;
        cout<<cnt<<"\n";
    }
    else
    {
        while(low<=high)
        {
            mid=(low+high)/2;
            if((mid*(mid+1)/2)-((x+1)*x)/2<=m && ((mid+1)*(mid+2))/2-((x+1)*x)/2>m)
            {
                cnt+=mid-x;
                //cout<<mid<<"\n";
                break;
            }
            else if((mid*(mid+1)/2)-((x+1)*x)/2<=m)
                low=mid+1;
            else
                high=mid-1;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}