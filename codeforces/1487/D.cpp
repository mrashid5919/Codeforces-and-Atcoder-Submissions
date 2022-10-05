//Looked editorial
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,sum,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=3;i<=n;i+=2)
        {
            if((i*i-1)/2+1>n)
                break;
            else if((i*i-1)%2==0)
                sum++;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
