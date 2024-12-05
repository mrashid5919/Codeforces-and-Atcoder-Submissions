#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,sum,tw,th,p,r;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0; tw=0; th=0; p=0;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            sum+=s[i]-'0';
            if(s[i]=='2')
                tw++;
            if(s[i]=='3')
                th++;
        }
        if(sum%9==0)
        {
            cout<<"YES\n";
            continue;
        }
        r=sum%9;
        if(r%2==1)
        {
            while(r<9)
            {
                if(9-r>=6 && th>0)
                {
                    th--;
                    r+=6;
                }
                else if(9-r>=2 && tw>0)
                {
                    tw--;
                    r+=2;
                }
                else
                {
                    p=1;
                    break;
                }
            }
        }
        else
        {
            while(r<18)
            {
                if(18-r>=6 && th>0)
                {
                    th--;
                    r+=6;
                }
                else if(18-r>=2 && tw>0)
                {
                    tw--;
                    r+=2;
                }
                else
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}