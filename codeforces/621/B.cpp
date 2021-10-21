#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int x[200005],y[200005];

int main()
{
    fastio;
    int n,i,sum=0,a;
    cin>>n;
    map<int,int> mp1;
    map<int,int> mp2;
    map<int,int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        mp1[x[i]+y[i]]++;
        mp2[x[i]-y[i]]++;
    }
    for(i=0;i<n;i++)
    {
        a=x[i]+y[i];
        it=mp1.find(a);
        if(it!=mp1.end())
        {
            sum+=(mp1[a]*(mp1[a]-1))/2;
            mp1.erase(a);
        }
        //cout<<sum<<"\n";
        a=x[i]-y[i];
        it=mp2.find(a);
        if(it!=mp2.end())
        {
            sum+=(mp2[a]*(mp2[a]-1))/2;
            mp2.erase(a);
        }
        //cout<<sum<<"\n";
    }
    cout<<sum;
    return 0;
}
