#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,ara[2500],sum,cursum,mn,p,l,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sum=0;
        mn=INT_MAX;
        p=-1;
        for(i=0;i<n;i++)
        {
            sum+=ara[i];
            cursum=0;
            l=i+1;
            mx=i+1;
            for(j=i+1;j<n;j++)
            {
                if(cursum+ara[j]==sum)
                {
                    p=0;
                    mx=max(mx,j-l+1);
                    l=j+1;
                    cursum=0;
                }
                else if(cursum+ara[j]>sum)
                {
                    cursum+=ara[j];
                    break;
                }
                else if(j==n-1 && cursum+ara[j]<sum)
                {
                    cursum+=ara[j];
                }
                else
                    cursum+=ara[j];
            }
            if(cursum==0)
                mn=min(mn,mx);
            //cout<<mn<<" "<<mx<<"\n";
        }
        if(p==-1)
            cout<<n<<"\n";
        else
            cout<<mn<<"\n";
    }
    return 0;
}
