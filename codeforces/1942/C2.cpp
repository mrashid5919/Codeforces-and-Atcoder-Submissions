#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,x,y,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>x>>y;
        for(i=0;i<x;i++)
            cin>>ara[i];
        sort(ara,ara+x);
        if(ara[1]-ara[0]==2)
            cnt++;
        cnt+=x-2;
        for(i=2;i<x;i++)
        {
            if(ara[i]-ara[i-1]==2)
                cnt++;
        }
        if(ara[0]+n-ara[x-1]==2)
            cnt++;
        vector<long long> oddif,evdif;
        long long dif4=0;
        //cout<<ara[2]-ara[1]<<"\n";
        //cout<<ara[0]+n-ara[x-1]<<"\n";
        for(i=1;i<x;i++)
        {
            if(ara[i]-ara[i-1]==4)
                dif4++;
            else if((ara[i]-ara[i-1])%2==1 && ara[i]-ara[i-1]>1)
                oddif.push_back(ara[i]-ara[i-1]);
            else if(ara[i]-ara[i-1]>2)
                evdif.push_back(ara[i]-ara[i-1]);
        }
        //cout<<evdif.size()<<"\n";
        if(ara[0]+n-ara[x-1]==4)
            dif4++;
        else if((ara[0]+n-ara[x-1])%2==1 && ara[0]+n-ara[x-1]>1)
            oddif.push_back(ara[0]+n-ara[x-1]);
        else if(ara[0]+n-ara[x-1]>2)
            evdif.push_back(ara[0]+n-ara[x-1]);
        sort(oddif.begin(),oddif.end());
        sort(evdif.begin(),evdif.end());
        //cout<<cnt<<"\n";
        if(y<=dif4)
        {
            cnt+=y*3;
            cout<<cnt<<"\n";
            continue;
        }
        cnt+=dif4*3;
        y-=dif4;
        long long le=0;
        //cout<<evdif[0]<<"\n";
        while(y>0 && le<evdif.size())
        {
            if(y>=evdif[le]/2-1)
            {
                cnt+=2*(evdif[le]/2-1)+1;
                y-=(evdif[le]/2-1);
                le++;
            }
            else
            {
                cnt+=y*2;
                y=0;
            }
        }
        //cout<<cnt<<"\n";
        le=0;
        while(y>0 && le<oddif.size())
        {
            if(y>=oddif[le]/2)
            {
                cnt+=2*(oddif[le]/2);
                y-=(oddif[le]/2);
                le++;
            }
            else
            {
                cnt+=y*2;
                y=0;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}