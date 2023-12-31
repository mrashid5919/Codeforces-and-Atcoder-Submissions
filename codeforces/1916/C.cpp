#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,sum,od,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        od=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            od+=ara[i]%2;
            sum+=ara[i];
            if(i==0)
            {
                cout<<sum<<" ";
                continue;
            }
            if(od%3==1)
                cout<<sum-od/3-1<<" ";
            else
                cout<<sum-od/3<<" ";
        }
        cout<<"\n";
    }
}