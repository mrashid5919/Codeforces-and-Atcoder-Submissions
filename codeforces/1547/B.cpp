#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,l,r,p;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        int ara[30]={0};
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
            ara[s[i]-'a']++;
        for(i=0;i<n;i++)
        {
            if(ara[i]!=1)
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                for(j=0;j<n;j++)
                {
                    if(s[j]=='a')
                    {
                        l=j;
                        r=j;
                        break;
                    }
                }
            }
            else
            {
                if(s[max(0,l-1)]==(char)('a'+i))
                    l=max(0,l-1);
                else if(s[min(n-1,r+1)]==(char)('a'+i))
                    r=min(n-1,r+1);
                else
                {
                    p=1;
                    break;
                }
            }
            //cout<<l<<" "<<r<<"\n";
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
