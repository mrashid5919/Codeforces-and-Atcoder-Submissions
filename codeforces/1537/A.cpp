#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x,i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        if(sum>=n)
            cout<<sum-n<<"\n";
        else
            cout<<1<<"\n";
    }
    return 0;
}
