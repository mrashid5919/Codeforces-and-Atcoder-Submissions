#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,x,m,cnt,y,i;
    ara[0]=1;
    for(i=1;;i++)
    {
        if(ara[i-1]*2>1000000000000000000){
            //cout<<i<<endl;
            break;
        }
        ara[i]=ara[i-1]*2;
    }
    cin>>t;
    while(t--)
    {
        cin>>x>>m;
        cnt=0;
        long long idx=upper_bound(ara,ara+60,x)-ara;
        //cout<<idx<<endl;
        for(y=ara[idx-1];y<=min(m,ara[idx]-1);y++)
        {
            if(x==y)
                continue;
            if(x%(x^y)==0 || y%(x^y)==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}