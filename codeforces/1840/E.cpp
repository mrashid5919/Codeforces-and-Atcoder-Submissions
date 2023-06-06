#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,tm,q,dif;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        dif=0;
        cin>>s1;
        cin>>s2;
        n=s1.size();
        cin>>tm>>q;
        for(i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
                dif++;
        }
        long long ara[tm+q+1]= {0};
        long long tp,pos,prm[10];
        for(i=1; i<=q; i++)
        {
            if(ara[i]>0)
            {
                if(s1[ara[i]-1]!=s2[ara[i]-1])
                    dif++;
            }
            cin>>tp;
            if(tp==1)
            {
                cin>>pos;
                ara[i+tm]=pos;
                if(s1[pos-1]!=s2[pos-1])
                    dif--;
            }
            else if(tp==2)
            {
                for(long long j=0; j<4; j++)
                    cin>>prm[j];
                prm[1]--;
                prm[3]--;
                long long x,y;
                if(prm[0]==prm[2])
                {
                    if(prm[0]==1)
                    {
                        if(s1[prm[1]]==s1[prm[3]])
                            continue;
                        else
                        {
                            if(s1[prm[1]]==s2[prm[1]])
                                x=0;
                            else
                                x=1;
                            if(s1[prm[3]]==s2[prm[3]])
                                y=0;
                            else
                                y=1;
                            char tmp=s1[prm[1]];
                            s1[prm[1]]=s1[prm[3]];
                            s1[prm[3]]=tmp;
                            if(s1[prm[1]]==s2[prm[1]] && x==1)
                                dif--;
                            if(s1[prm[3]]==s2[prm[3]] && y==1)
                                dif--;
                            if(s1[prm[1]]!=s2[prm[1]] && x==0)
                                dif++;
                            if(s1[prm[3]]!=s2[prm[3]] && y==0)
                                dif++;
                        }
                    }
                    else
                    {
                        if(s2[prm[1]]==s2[prm[3]])
                            continue;
                        else
                        {
                            if(s1[prm[1]]==s2[prm[1]])
                                x=0;
                            else
                                x=1;
                            if(s1[prm[3]]==s2[prm[3]])
                                y=0;
                            else
                                y=1;
                            char tmp=s2[prm[1]];
                            s2[prm[1]]=s2[prm[3]];
                            s2[prm[3]]=tmp;
                            if(s1[prm[1]]==s2[prm[1]] && x==1)
                                dif--;
                            if(s1[prm[3]]==s2[prm[3]] && y==1)
                                dif--;
                            if(s1[prm[1]]!=s2[prm[1]] && x==0)
                                dif++;
                            if(s1[prm[3]]!=s2[prm[3]] && y==0)
                                dif++;
                        }
                    }
                }
                else if(prm[0]==1 && prm[2]==2)
                {
                    if(s1[prm[1]]==s2[prm[3]])
                        continue;
                    if(s1[prm[1]]==s2[prm[1]])
                        x=0;
                    else
                        x=1;
                    if(s1[prm[3]]==s2[prm[3]])
                        y=0;
                    else
                        y=1;
                    char tmp=s1[prm[1]];
                    s1[prm[1]]=s2[prm[3]];
                    s2[prm[3]]=tmp;
                    if(s1[prm[1]]==s2[prm[1]] && x==1)
                        dif--;
                    if(s1[prm[3]]==s2[prm[3]] && y==1)
                        dif--;
                    if(s1[prm[1]]!=s2[prm[1]] && x==0)
                        dif++;
                    if(s1[prm[3]]!=s2[prm[3]] && y==0)
                        dif++;
                }
                else
                {
                    if(s2[prm[1]]==s1[prm[3]])
                        continue;
                    if(s1[prm[1]]==s2[prm[1]])
                        x=0;
                    else
                        x=1;
                    if(s1[prm[3]]==s2[prm[3]])
                        y=0;
                    else
                        y=1;
                    char tmp=s2[prm[1]];
                    s2[prm[1]]=s1[prm[3]];
                    s1[prm[3]]=tmp;
                    if(s1[prm[1]]==s2[prm[1]] && x==1)
                        dif--;
                    if(s1[prm[3]]==s2[prm[3]] && y==1)
                        dif--;
                    if(s1[prm[1]]!=s2[prm[1]] && x==0)
                        dif++;
                    if(s1[prm[3]]!=s2[prm[3]] && y==0)
                        dif++;
                }
            }
            else if(dif==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
