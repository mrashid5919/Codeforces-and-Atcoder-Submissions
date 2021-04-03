#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,zero,one,p,q;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        zero=0;
        one=0;
        p=0;
        q=0;
        cin>>n;
        cin>>s1;
        cin>>s2;
        for(i=0;i<n;i++)
        {
            if(s1[i]=='0')
                zero++;
            else
                one++;
        }
        for(i=n-1;i>=0;i--)
        {
            if(p==0)
            {
                if(s1[i]!=s2[i])
                {
                    if(zero!=one)
                    {
                        q=1;
                        break;
                    }
                    p=1;
                }
            }
            else
            {
                if(s1[i]==s2[i])
                {
                    if(zero!=one)
                    {
                        q=1;
                        break;
                    }
                    p=0;
                }
            }
            if(s1[i]=='0')
                zero--;
            else
                one--;
        }
        if(q==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
