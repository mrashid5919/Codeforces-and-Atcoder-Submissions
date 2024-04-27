#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mv,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        vector<long long> dist;
        dist.push_back(ara[0]);
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1])
                dist.push_back(ara[i]);
        }
        x=dist.size();
        mv=-1;
        for(i=0;i<x;i++)
        {
            if(i==0)
            {
                if(dist[i]>1)
                {
                    mv=0;
                    break;
                }
            }
            else if(dist[i]-dist[i-1]>1)
            {
                mv=i;
                break;
            }
        }
        if(mv==-1)
        {
            if(x%2==0)
                cout<<"Bob\n";
            else
                cout<<"Alice\n";
        }
        else if(x%2==1)
        {
            if(mv%2==0)
                cout<<"Alice\n";
            else
                cout<<"Bob\n";
        }
        else if(mv%2==1)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";
        // if(mv%2==0)
        //     cout<<"Bob\n";
        // else
        //     cout<<"Alice\n";
    }
    return 0;
}