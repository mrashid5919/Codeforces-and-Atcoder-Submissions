#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[2000];

int main()
{
    fastio;
    long long n,i,flag=0,x,y,cnt=0,tm;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    x=ara[0];
    for(i=1;i<n;i++)
        x=__gcd(x,ara[i]);
    for(i=0;i<n;i++)
    {
        y=0;
        tm=ara[i]/x;
        while(tm%2==0)
        {
            tm/=2;
            y++;
        }
        while(tm%3==0)
        {
            tm/=3;
            y++;
        }
        if(tm==1)
            cnt+=y;
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<-1<<"\n";
    else
        cout<<cnt<<"\n";
    return 0;
}
