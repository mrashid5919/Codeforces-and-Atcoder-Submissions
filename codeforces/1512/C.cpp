#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,a,b,ze,on,p;
    string s;
    cin>>t;
    while(t--)
    {
        ze=0;
        on=0;
        p=0;
        cin>>a>>b;
        cin>>s;
        n=s.size();
        for(i=0;i<n/2;i++)
        {
            if(n==1)
            {
                if(s[0]=='0')
                    ze++;
                else if(s[0]=='1')
                    on++;
                break;
            }
            if(s[i]!='?' && s[n-i-1]!='?')
            {
                if(s[i]=='0' && s[n-i-1]=='0')
                    ze+=2;
                else if(s[i]=='1' && s[n-i-1]=='1')
                    on+=2;
                else
                {
                    p=1;
                    break;
                }
            }
            else if(s[i]!='?')
            {
                if(s[i]=='0')
                {
                    s[n-i-1]='0';
                    ze+=2;
                }
                else
                {
                    s[n-i-1]='1';
                    on+=2;
                }
            }
            else if(s[n-i-1]!='?')
            {
                if(s[n-i-1]=='0')
                {
                    s[i]='0';
                    ze+=2;
                }
                else
                {
                    s[i]='1';
                    on+=2;
                }
            }
        }
        if(p==1 || ze>a || on>b)
        {
            cout<<"-1"<<"\n";
            continue;
        }
        if(n%2==1)
        {
            if(s[n/2]=='?')
                p=1;
            else if(s[n/2]=='1')
                on++;
            else
                ze++;
        }
        if(p==0)
        {
            if((a-ze)%2==0 && (b-on)%2==0)
            {
                for(i=0;i<n/2;i++)
                {
                    if(s[i]=='?')
                    {
                        if(a-ze>0)
                        {
                            s[i]='0';
                            s[n-i-1]='0';
                            ze+=2;
                        }
                        else if(b-on==0)
                        {
                            p=2;
                            break;
                        }
                        else
                        {
                            s[i]='1';
                            s[n-i-1]='1';
                            on+=2;
                        }
                    }
                }
            }
            else
            {
                p=2;
            }
            if(p==2)
            {
                cout<<"-1"<<"\n";
                continue;
            }
            cout<<s<<"\n";
        }
        else
        {
            for(i=0; i<n/2; i++)
            {
                if(s[i]=='?')
                {
                    if(a-ze>=2)
                    {
                        s[i]='0';
                        s[n-i-1]='0';
                        ze+=2;
                    }
                    else if(b-on<2)
                    {
                        p=2;
                        break;
                    }
                    else
                    {
                        s[i]='1';
                        s[n-i-1]='1';
                        on+=2;
                    }
                }
            }
            if(p==2)
            {
                cout<<"-1"<<"\n";
                continue;
            }
            if(a-ze!=1 && b-on!=1)
            {
                cout<<"-1"<<"\n";
                continue;
            }
            if(a-ze==1)
                s[n/2]='0';
            else
                s[n/2]='1';
            cout<<s<<"\n";
        }
    }
    return 0;
}
