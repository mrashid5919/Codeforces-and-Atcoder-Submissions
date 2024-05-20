#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,ans,j;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        map<pair<long long,long long>,long long> mp1,mp2,mp3;
        long long a=0,b=0,c=0;
        vector<long long> pr[n+5],sf[n+5],ot[n+5];
        vector<long long>::iterator it;
        for(i=0;i<n-2;i++)
        {
            if(mp1[{ara[i],ara[i+1]}]==0)
            {
                mp1[{ara[i],ara[i+1]}]=a+1;
                a++;
            }
            pr[mp1[{ara[i],ara[i+1]}]].push_back(ara[i+2]);
            if(mp2[{ara[i+1],ara[i+2]}]==0)
            {
                mp2[{ara[i+1],ara[i+2]}]=b+1;
                b++;
            }
            sf[mp2[{ara[i+1],ara[i+2]}]].push_back(ara[i]);
            if(mp3[{ara[i],ara[i+2]}]==0)
            {
                mp3[{ara[i],ara[i+2]}]=c+1;
                c++;
            }
            ot[mp3[{ara[i],ara[i+2]}]].push_back(ara[i+1]);
        }
        for(i=1;i<=a;i++)
            sort(pr[i].begin(),pr[i].end());
        for(i=1;i<=b;i++)
            sort(sf[i].begin(),sf[i].end());
        for(i=1;i<=c;i++)
            sort(ot[i].begin(),ot[i].end());
        int flag,x;
        for(i=1;i<=a;i++)
        {
            flag=0;
            for(j=0;j<pr[i].size()-1;j++)
            {
                if(j==0)
                {
                    it=upper_bound(pr[i].begin(),pr[i].end(),pr[i][j]);
                    if(it==pr[i].end())
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        x=pr[i].size()-(it-pr[i].begin());
                        ans+=x;
                    }    
                }
                else if(pr[i][j]==pr[i][j-1])
                {
                    ans+=x;
                }
                else
                {
                    it=upper_bound(pr[i].begin(),pr[i].end(),pr[i][j]);
                    if(it==pr[i].end())
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        x=pr[i].size()-(it-pr[i].begin());
                        ans+=x;
                    }    
                }
            }
        }
        //cout<<ans<<"\n";
        for(i=1;i<=b;i++)
        {
            flag=0;
            for(j=0;j<sf[i].size()-1;j++)
            {
                if(j==0)
                {
                    it=upper_bound(sf[i].begin(),sf[i].end(),sf[i][j]);
                    if(it==sf[i].end())
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        x=sf[i].size()-(it-sf[i].begin());
                        ans+=x;
                    }    
                }
                else if(sf[i][j]==sf[i][j-1])
                {
                    ans+=x;
                }
                else
                {
                    it=upper_bound(sf[i].begin(),sf[i].end(),sf[i][j]);
                    if(it==sf[i].end())
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        x=sf[i].size()-(it-sf[i].begin());
                        ans+=x;
                    }    
                }
            }
        }
        for(i=1;i<=c;i++)
        {
            flag=0;
            for(j=0;j<ot[i].size()-1;j++)
            {
                if(j==0)
                {
                    it=upper_bound(ot[i].begin(),ot[i].end(),ot[i][j]);
                    if(it==ot[i].end())
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        x=ot[i].size()-(it-ot[i].begin());
                        ans+=x;
                    }    
                }
                else if(ot[i][j]==ot[i][j-1])
                {
                    ans+=x;
                }
                else
                {
                    it=upper_bound(ot[i].begin(),ot[i].end(),ot[i][j]);
                    if(it==ot[i].end())
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        x=ot[i].size()-(it-ot[i].begin());
                        ans+=x;
                    }    
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}