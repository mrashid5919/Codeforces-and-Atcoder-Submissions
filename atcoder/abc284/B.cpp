#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,cnt,x;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==1)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
