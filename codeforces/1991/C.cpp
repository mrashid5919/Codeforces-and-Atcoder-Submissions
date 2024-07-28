#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,p,j,mx,mn;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i>0 && ara[i]%2!=ara[i-1]%2)
                p=1;
        }
        if(p==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        set<long long> st;
        vector<long long> v;
        vector<long long> vals;
        for(i=0;i<n;i++){
            st.insert(ara[i]);
        }
        for(j=0;j<40;j++)
        {
            if(j==0)
            {
                for(i=0;i<n;i++)
                {
                    if(i==0)
                    {
                        mn=ara[0];
                        mx=ara[0];
                    }
                    else
                    {
                        mn=min(mn,ara[i]);
                        mx=max(mx,ara[i]);
                    }
                }
            }
            vals.push_back((mn+mx)/2);
            for(i=0;i<n;i++){
                ara[i]=abs(ara[i]-vals[j]);
                if(i==0)
                {
                    mn=ara[0];
                    mx=ara[0];
                }
                else
                {
                    mn=min(mn,ara[i]);
                    mx=max(mx,ara[i]);
                }
            }
            if(mn==0 && mx==0)
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<vals.size()<<"\n";
            for(i=0;i<vals.size();i++)
                cout<<vals[i]<<" ";
            cout<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
    return 0;
}