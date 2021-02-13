#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    int n,i,j,count,co=0,p=0,q,m=0;
    static int ara[1005]={0},ans[1005],ch[30]={0};
    string s;
    char t[1005];
    cin>>s;
    n=s.size();
    ara[0]=1;
    ara[1]=1;
    for(i=4;i<=n;i+=2)
        ara[i]=1;
    for(i=3;i*i<=n;i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
            {
                ara[j]=1;
            }
        }
    }
    count=0;
    for(i=2;i<=n;i++)
    {
        if(ara[i]==0)
        {
            ans[count]=i;
            //cout<<ans[count]<<" ";
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        if(n/ans[i]>1)
            ara[ans[i]]=1;
    }
    ara[1]=0;
    for(i=1;i<=n;i++)
    {
        if(ara[i]==1)
            co++;
    }
    for(i=0;i<n;i++)
    {
        ch[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(ch[i]>=co)
        {
            p=1;
            q=i;
            break;
        }
    }
    if(p==0)
        cout<<"NO";
    else
    {
        cout<<"YES"<<"\n";
        for(i=1;i<=n;i++)
        {
            if(ara[i]==1)
            {
                t[i]='a'+q;
                ch[q]--;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(ara[i]==0)
            {
                if(ch[m]>0)
                {
                    t[i]='a'+m;
                    ch[m]--;
                }
                else
                {
                    while(ch[m]==0)
                        m++;
                    t[i]='a'+m;
                    ch[m]--;
                }
            }
        }
        for(i=1;i<=n;i++)
            cout<<t[i];
    }
    return 0;
}
