#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<long long,long long> ex;
        for(i=0;i<n-1;i++)
        {
            //ex[i]=0;
            cin>>ara[i];
        }
        //ex[n]=0;
        vector<long long> vect;
        for(i=0;i<n-1;i++)
        {
            if(i==0)
            {
                if(ara[i]<=n)
                    ex[ara[i]]++;
                vect.push_back(ara[i]);
            }
            else
            {
                if(ara[i]-ara[i-1]<=n)
                    ex[ara[i]-ara[i-1]]++;
                vect.push_back(ara[i]-ara[i-1]);
            }
        }
        if(ex[0])
        {
            cout<<"NO\n";
            continue;
        }
        long long missing=0,x=-1,y=-1;
        for(i=1;i<=n;i++)
        {
            if(ex[i]==0){
                missing++;
                //cout<<i<<"\n";
            }
        }
        //cout<<missing<<"\n";
        if(missing>2)
        {
            cout<<"NO\n";
            continue;
        }
        if(missing<2)
        {
            cout<<"YES\n";
            continue;
        }
        for(i=1;i<=n;i++)
        {
            if(ex[i]==0)
            {
                if(x==-1)
                    x=i;
                else
                    y=i;
            }
        }
        //cout<<x<<" "<<y<<"\n";
        int p=0;
        for(i=0;i<n-1;i++)
        {
            //cout<<vect[i]<<"\n";
            if(x+y==vect[i])
            {
                if(vect[i]<=n && ex[vect[i]]>1){
                    p=1;
                    break;
                }
                else if(vect[i]>n){
                    p=1;
                    break;
                }
            }
        }
        if(p)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}