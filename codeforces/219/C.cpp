#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,i,ans=0,cur=1,j;
    string s;
    cin>>n>>k;
    cin>>s;
    if(k==2)
    {
        string u,v;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                u.push_back('A');
                v.push_back('B');
            }
            else
            {
                u.push_back('B');
                v.push_back('A');
            }
        }
        long long dif1=0,dif2=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!=u[i])
                dif1++;
            if(s[i]!=v[i])
                dif2++;
        }
        if(dif1<dif2)
        {
            cout<<dif1<<"\n";
            cout<<u<<"\n";
        }
        else
        {
            cout<<dif2<<"\n";
            cout<<v<<"\n";
        }
    }
    else
    {
        for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1]){
            cur++;
            if(i==n-1)
            {
                ans+=cur/2;
                char x;
                int ara[40]={0};
                    if(cur%2==0 && i-cur>=0)
                        ara[s[i-cur]-'A']++;
                    ara[s[i]-'A']++;
                    for(j=0;j<k;j++)
                    {
                        if(ara[j]==0)
                        {
                            x=(char)('A'+j);
                            break;
                        }
                    }
                for(j=1;j<cur;j+=2)
                {
                    s[i-j]=x;
                }
            }
        }
        else
        {
            if(cur>1)
            {
                ans+=cur/2;
                char x;
                int ara[40]={0};
                if(cur%2==1)
                    x=s[i];
                else
                {
                    if(i-cur-1>=0)
                        ara[s[i-cur-1]-'A']++;
                    ara[s[i-1]-'A']++;
                    for(j=0;j<k;j++)
                    {
                        if(ara[j]==0)
                        {
                            x=(char)('A'+j);
                            break;
                        }
                    }
                }
                for(j=2;j<=cur;j+=2)
                {
                    s[i-j]=x;
                }
            }
            cur=1;
        }
    }
    cout<<ans<<"\n";
    cout<<s<<"\n";
    }
    return 0;
}
