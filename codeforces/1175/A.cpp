#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cnt=0;
        while(n!=0)
        {
            if(n%k==0)
            {
                n/=k;
                cnt++;
            }
            else
            {
                cnt+=n%k;
                n-=n%k;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
