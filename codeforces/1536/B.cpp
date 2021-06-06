#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,k,p,ara[30],l;
    char c,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        long long ara[30]={0};
        p=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
            ara[s[i]-'a']++;
        for(i=0;i<26;i++)
        {
            if(ara[i]==0)
            {
                c=char('a'+i);
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<c<<"\n";
            continue;
        }
        for(i=0;i<26;i++)
        {
            p=0;
            a='a'+i;
            for(j=0;j<26;j++)
            {
               p=0;
               b='a'+j;
                for(k=0;k<n-1;k++)
                {
                    if(s[k]==a && s[k+1]==b)
                    {
                        p=1;
                        break;
                    }
                }
                if(p==0)
                {
                    break;
                }
            }
            if(p==0)
                break;
        }
        if(p==0)
        {
            cout<<a<<b<<"\n";
            continue;
        }
        p=0;
        for(i=0;i<26;i++)
        {
            p=0;
            a='a'+i;
            for(j=0;j<26;j++)
            {
               p=0;
               b='a'+j;
               for(l=0;l<26;l++)
               {
                   p=0;
                   c='a'+l;
                    for(k=0; k<n-2; k++)
                    {
                        if(s[k]==a && s[k+1]==b && s[k+2]==c)
                        {
                            p=1;
                            break;
                        }
                    }
                    if(p==0)
                        break;
               }
                if(p==0)
                {
                    break;
                }
            }
            if(p==0)
                break;
        }
        if(p==0)
        {
            cout<<a<<b<<c<<"\n";
            continue;
        }

    }
    return 0;
}
