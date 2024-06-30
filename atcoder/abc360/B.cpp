#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,j,p=0;
    string s,t;
    cin>>s>>t;
    n=s.size();
    if(t.size()==1)
    {
        for(i=0;i<n-1;i++)
        {
            if(s[i]==t[0])
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    else
    {
        p=-1;
        int idx;
        for(i=0;i<n;i++)
        {
            if(s[i]==t[0])
            {
                idx=i+1;
                p=0;
                break;
            }
        }
        if(p==-1)
        {
            cout<<"No\n";
            return 0;
        }
        for(i=idx;i<n;i++)
        {
            if(s[i-1]==t[0])
            {
                for(j=2*i;j<=n;j++)
                {
                    string tmp;
                    if(s[j-1]==t[1])
                    {
                        
                        tmp.push_back(s[i-1]);
                        tmp.push_back(s[j-1]);
                        for(int k=2*j-i;k<=n;k+=j-i)
                        {
                            tmp.push_back(s[k-1]);
                        }
                    }
                    if(tmp==t)
                    {
                        p=1;
                        break;
                    }
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    
    return 0;
}