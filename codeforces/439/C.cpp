//Incomplete
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];
vector<long long> even,odd;

int main()
{
    fastio;
    long long n,k,p,ev=0,od=0,flag=0,i;
    cin>>n>>k>>p;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
        {
            ev++;
            even.push_back(ara[i]);
        }
        else
        {
            od++;
            odd.push_back(ara[i]);
        }
    }
    if(od<k-p)
    {
        cout<<"NO\n";
        return 0;
    }
    if((od-k+p)%2==1)
    {
        cout<<"NO\n";
        return 0;
    }
    if(ev<p && (od-k+p)/2<p-ev)
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    if(p==0)
    {
        for(i=0;i<k-1;i++)
        {
            cout<<1<<" "<<odd[i]<<"\n";
        }
        long long cnt=od-k+ev;
        cout<<cnt+1<<" ";
        for(i=k-1;i<od;i++)
            cout<<odd[i]<<" ";
        for(i=0;i<ev;i++)
            cout<<even[i]<<" ";
        cout<<"\n";
    }
    else if(p==k)
    {
        if(ev>=k)
        {
            for(i=0;i<k-1;i++)
            {
                cout<<1<<" "<<even[i]<<"\n";
            }
            long long cnt=ev-k+od;
            cout<<cnt+1<<" ";
            for(i=k-1;i<ev;i++)
                cout<<even[i]<<" ";
            for(i=0;i<od;i++)
                cout<<odd[i]<<" ";
            cout<<"\n";
        }
        else
        {
            for(i=0;i<ev;i++)
            {
                cout<<1<<" "<<even[i]<<"\n";
            }
            for(i=0;i<k-ev-1;i++)
            {
                cout<<2<<" "<<odd[0]<<" "<<odd[1]<<"\n";
                odd.erase(odd.begin());
                odd.erase(odd.begin());
            }
            cout<<odd.size()<<" ";
            for(i=0;i<odd.size();i++)
                cout<<odd[i]<<" ";
            cout<<"\n";
        }
    }
    else
    {
        if(ev>=p)
        {
            for(i=0;i<k-p;i++){
                cout<<1<<" "<<odd[i]<<"\n";
            }
            for(i=0;i<p-1;i++)
                cout<<1<<" "<<even[i]<<"\n";
            long long cnt=ev+1+od-k;
            cout<<cnt<<" ";
            for(i=p-1;i<ev;i++)
                cout<<even[i]<<" ";
            for(i=k-p;i<od;i++)
                cout<<odd[i]<<" ";
            cout<<"\n";
        }
        else
        {
            for(i=0;i<k-p;i++){
                cout<<1<<" "<<odd[0]<<"\n";
                odd.erase(odd.begin());
            }
            for(i=0;i<ev;i++)
                cout<<1<<" "<<even[i]<<"\n";
            for(i=0;i<p-ev-1;i++){
                cout<<2<<" "<<odd[0]<<" "<<odd[1]<<"\n";
                odd.erase(odd.begin());
                odd.erase(odd.begin());
            }
            cout<<odd.size()<<" ";
            for(i=0;i<odd.size();i++)
                cout<<odd[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}