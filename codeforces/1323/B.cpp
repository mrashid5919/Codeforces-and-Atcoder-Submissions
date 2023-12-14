//Incomplete
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[40005],b[40005];

int main()
{
    fastio;
    //cout<<"here"<<endl;
    long long n,m,k,i,j,cur,ans=0;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    //cout<<"here"<<endl;
    vector<long long> aseg,bseg;
    aseg.push_back(0);
    bseg.push_back(0);
    //cout<<"here"<<endl;
    cur=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cur=ara[i];
            if(n==1 && cur==1)
                aseg.push_back(cur);
        }
        else if(ara[i]==1)
        {
            if(ara[i-1]==0)
                cur=1;
            else
                cur++;
            if(i==n-1)
                aseg.push_back(cur);
        }
        else
        {
            if(ara[i-1]==1)
                aseg.push_back(cur);
        }
    }
    cur=0;
    for(i=0;i<m;i++)
    {
        if(i==0){
            cur=b[i];
            if(m==1 && cur==1)
                bseg.push_back(cur);
        }
        else if(b[i]==1)
        {
            if(b[i-1]==0)
                cur=1;
            else
                cur++;
            if(i==m-1)
                bseg.push_back(cur);
        }
        else
        {
            if(b[i-1]==1)
                bseg.push_back(cur);
        }
    }
    //cout<<"here"<<endl;
    sort(aseg.begin(),aseg.end());
    sort(bseg.begin(),bseg.end());
    long long x=aseg.size(),y=bseg.size();
    vector<long long> aps,bps;
    aps.push_back(aseg[0]);
    //cout<<aseg[0]<<"\n";
    for(i=1;i<x;i++)
        aps.push_back(aps[i-1]+aseg[i]);
    bps.push_back(bseg[0]);
    //cout<<bseg[0]<<"\n";
    for(i=1;i<y;i++)
        bps.push_back(bps[i-1]+bseg[i]);
    vector<long long>::iterator it1,it2;
    for(i=1;i*i<=k;i++)
    {
        long long p,q;
        if(k%i==0)
        {
            it1=lower_bound(aseg.begin(),aseg.end(),i);
            if(it1!=aseg.end())
            {
                // if(it1==aseg.begin())
                //     p=aps[x-1]-x*(i-1);
                // else
                    p=aps[x-1]-aps[(it1-aseg.begin())-1]-(x-(it1-aseg.begin()))*(i-1);
                it2=lower_bound(bseg.begin(),bseg.end(),k/i);
                if(it2!=bseg.end())
                {
                    // if(it2==bseg.begin())
                    //     q=bps[y-1]-y*(k/i-1);
                    // else
                        q=bps[y-1]-bps[(it2-bseg.begin())-1]-(y-(it2-bseg.begin()))*(k/i-1);
                    ans+=p*q;
                }
            }
            if(i*i!=k)
            {
                it1=lower_bound(aseg.begin(),aseg.end(),k/i);
                if(it1!=aseg.end())
                {
                    // if(it1==aseg.begin())
                    //     p=aps[x-1]-x*(k/i-1);
                    // else
                        p=aps[x-1]-aps[(it1-aseg.begin())-1]-(x-(it1-aseg.begin()))*(k/i-1);
                    it2=lower_bound(bseg.begin(),bseg.end(),i);
                    if(it2!=bseg.end())
                    {
                        // if(it2==bseg.begin())
                        //     q=bps[y-1]-y*(i-1);
                        // else
                            q=bps[y-1]-bps[(it2-bseg.begin())-1]-(y-(it2-bseg.begin()))*(i-1);
                        ans+=p*q;
                    }
                }
            }
            // kdiv.push_back(i);
            // if(i*i!=k)
            //     kdiv.push_back(k/i);
        }
    }
    cout<<ans<<"\n";
    return 0;
}