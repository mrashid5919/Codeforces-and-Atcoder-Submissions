#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long a,b,m,i,cnt=0,ara[5];
    cin>>a>>b>>m;
    if(max(a,b)>=m)
    {
        cout<<0<<"\n";
        return 0;
    }
    if(max(a,b)<=0)
    {
        cout<<-1<<"\n";
        return 0;
    }
    if(min(a,b)<0)
    {
        if(((-1)*min(a,b))%max(a,b)==0)
            cnt=((-1)*min(a,b))/max(a,b);
        else
            cnt=1+((-1)*min(a,b))/max(a,b);
        if(a==min(a,b))
            a+=cnt*b;
        else
            b+=cnt*a;
    }
    ara[0]=min(a,b);
    ara[1]=max(a,b);
    if(ara[1]>=m)
    {
        cout<<cnt<<"\n";
        return 0;
    }
    for(i=0;;i++)
    {
        ara[0]=ara[0]+ara[1];
        cnt++;
        if(ara[0]>=m)
        {
            cout<<cnt<<"\n";
            break;
        }
        swap(ara[0],ara[1]);
    }
    return 0;
}