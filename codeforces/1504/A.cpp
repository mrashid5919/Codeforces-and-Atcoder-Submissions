#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p,q;
    string s1,s2,s3;
    cin>>t;
    while(t--)
    {
        p=0;
        q=0;
        cin>>s1;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]!='a')
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        s2='a'+s1;
        s3=s1+'a';
        for(i=0;i<s2.length()/2;i++)
        {
            if(s2[i]!=s2[s2.length()-1-i])
            {
                q=1;
                break;
            }
        }
        if(q==1)
        {
            cout<<"YES"<<"\n";
            cout<<s2<<"\n";
            continue;
        }
        for(i=0;i<s3.length()/2;i++)
        {
            if(s3[i]!=s3[s3.length()-1-i])
            {
                q=1;
                break;
            }
        }
        if(q==1)
        {
            cout<<"YES"<<"\n";
            cout<<s3<<"\n";
            continue;
        }
    }
    return 0;
}
