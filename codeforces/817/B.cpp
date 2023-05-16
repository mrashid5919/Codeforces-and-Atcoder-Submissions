#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    if(ara[0]==ara[1] && ara[1]==ara[2])
    {
        x=3;
        for(i=3;i<n;i++)
        {
            if(ara[i]==ara[0])
                x++;
            else
                break;
        }
        cout<<(x*(x-1)*(x-2))/6<<"\n";
    }
    else if(ara[1]==ara[2])
    {
        x=2;
        for(i=3;i<n;i++)
        {
            if(ara[i]==ara[2])
                x++;
            else
                break;
        }
        cout<<(x*(x-1))/2<<"\n";
    }
    else
    {
        x=1;
        for(i=3;i<n;i++)
        {
            if(ara[i]==ara[2])
                x++;
            else
                break;
        }
        cout<<x<<"\n";
    }
    return 0;
}
