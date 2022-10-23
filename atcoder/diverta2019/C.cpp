#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,j,cnt=0,x;
    string ara[10005];
    int a=0,b=0,ab=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        x=ara[i].size();
        if(ara[i][0]=='B' && ara[i][x-1]=='A')
            ab++;
        else if(ara[i][0]=='B')
            b++;
        else if(ara[i][x-1]=='A')
            a++;
        for(j=0; j<x-1; j++)
        {
            if(ara[i][j]=='A' && ara[i][j+1]=='B')
                cnt++;
        }
    }
    //cout<<sm<<"\n";
    /*if(b>=a+1)
        sm+=ab-1+a;
    else
        sm+=ab-1+b-1;*/
    if(ab==0)
        cnt+=min(a,b);
    else
    {
        int sm=ab-1,sm2=0;
        if(a>0)
        {
            sm++;
            a--;
        }
        if(b>0)
        {
            sm++;
            b--;
        }
        sm+=min(b,a);
        cnt+=sm;
    }

    cout<<cnt<<"\n";
    return 0;
}
