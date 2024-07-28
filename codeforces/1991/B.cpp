#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,i,j,p,cur;
    vector<long long> pr(35);
    pr[0]=1;
    for(i=1;i<31;i++)
        pr[i]=pr[i-1]*2;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n-1;i++)
            cin>>b[i];
        ara[0]=b[0];
        for(i=1;i<n;i++)
        {
            ara[i]=ara[i-1];
            if(i==1)
            {
                ara[i]=b[i]|b[i-1];
            }
            else if(i==n-1)
                ara[i]=b[i-1];
            else
            {
                ara[i]=(ara[i-1]&b[i-1])|b[i];
            }
            if((ara[i]&ara[i-1])!=b[i-1])
            {
                p=1;
                break;
            }
            //cout<<ara[i]<<"\n";
        }
        if(p==1)
            cout<<-1<<"\n";
        else
        {
            for(i=0;i<n;i++)
                cout<<ara[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}