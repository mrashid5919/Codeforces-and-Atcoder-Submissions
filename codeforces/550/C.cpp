#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int n,i,j,p=0,d;
    cin>>s;
    n=s.size();
    for(i=0;i<1000;i+=8)
    {
        p=0;
        if(i<10)
        {
            for(j=0;j<n;j++)
            {
                if(s[j]=='0'+i)
                {
                    p=1;
                    break;
                }
            }
            if(p)
            {
                cout<<"YES\n"<<i<<"\n";
                break;
            }
        }
        else if(i<100)
        {
            for(j=0;j<n;j++)
            {
                if(p==0 && s[j]=='0'+(i/10))
                    p=1;
                else if(p==1 && s[j]=='0'+(i%10))
                {
                    p=2;
                    break;
                }
            }
            if(p==2)
            {
                cout<<"YES\n"<<i<<"\n";
                break;
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(p==0 && s[j]=='0'+(i/100))
                    p=1;
                else if(p==1 && s[j]=='0'+(i/10)%10)
                    p=2;
                else if(p==2 && s[j]=='0'+(i%10))
                {
                    p=3;
                    break;
                }
            }
            if(p==3)
            {
                cout<<"YES\n"<<i<<"\n";
                break;
            }
        }
        p=0;
    }
    if(p==0)
        cout<<"NO\n";
}