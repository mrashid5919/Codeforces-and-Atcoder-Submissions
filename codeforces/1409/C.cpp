#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x,y,i,count,ara[100],d;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>x>>y;
        for(i=1;i<=50;i++)
        {
            if((y-x)%i==0)
            {
                if((y-x)/i<n)
                {
                    d=i;
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(y-i*d>0)
            {
                count++;
                ara[i]=y-i*d;
            }
            else
                break;
        }
        for(i=count;i<n;i++)
        {
            ara[i]=y+(i-count+1)*d;
        }
        for(i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
