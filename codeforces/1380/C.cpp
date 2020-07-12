#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,i,ara[100002],count,high;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<long long>());
        high=0;
        count=0;
        for(i=0;i<n;i++)
        {
            if((i-high+1)*ara[i]>=x)
            {
                count++;
                high=i+1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
