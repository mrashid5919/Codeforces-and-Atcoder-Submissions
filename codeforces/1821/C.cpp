#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long pr[40];

long long fnd(long long x)
{
    long long low,high,mid;
    if(x==0)
        return 0LL;
    low=0;
    high=30;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(pr[mid]<=x && pr[mid+1]>x)
            return mid+1;
        else if(pr[mid]<=x)
            low=mid+1;
        else
            high=mid-1;
    }
}

int main()
{
    fastio;
    long long t,n,i,j,mn,mx,x;
    string s;
    pr[0]=1;
    for(i=1;i<=30;i++)
        pr[i]=pr[i-1]*2;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        cin>>s;
        n=s.size();
        vector<long long> pos[35];
        for(i=0;i<n;i++)
            pos[s[i]-'a'].push_back(i);
        /*for(i=0;i<26;i++)
        {
            for(j=0;j<pos[i].size();j++)
                cout<<pos[i][j]<<" ";
            cout<<"\n";
        }*/
        for(i=0;i<26;i++)
        {
            mx=0;
            for(j=0;j<pos[i].size();j++)
            {
                if(j==0)
                {
                    x=pos[i][j];
                }
                else
                    x=pos[i][j]-pos[i][j-1]-1;
                //cout<<i<<" "<<j<<" "<<x<<"\n";
                mx=max(mx,fnd(x));
                //cout<<mx<<"\n";
                if(j==pos[i].size()-1){
                    x=n-1-pos[i][j];
                    //cout<<i<<" "<<j<<" "<<x<<"\n";
                    mx=max(mx,fnd(x));
                    //cout<<mx<<"\n";
                }
            }
            if(pos[i].size()>0)
                mn=min(mn,mx);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
