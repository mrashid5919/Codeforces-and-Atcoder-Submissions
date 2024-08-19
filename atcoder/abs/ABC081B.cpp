#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,x,mn,i,cur;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        cur=0;
        while(x%2==0)
        {
            x/=2;
            cur++;
        }
        if(i==0)
        {
            mn=cur;
        }
        else
        {
            mn=min(mn,cur);
        }
    }
    cout<<mn<<"\n";
    return 0;
}