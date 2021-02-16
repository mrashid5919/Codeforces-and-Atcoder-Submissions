#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,p,x,low,high,mid;
    long long ara[10006];
    for(i=1;i<=10000;i++)
        ara[i]=i*i*i;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=1;i*i*i<n;i++)
        {
            if(p==1)
                break;
            low=1;
            high=10000;
            while(low<=high)
            {
                mid=(high+low)/2;
                if(ara[mid]==n-i*i*i)
                {
                    p=1;
                    break;
                }
                else if(ara[mid]>n-i*i*i)
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        if(p==0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
