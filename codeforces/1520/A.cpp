#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[30],p;
    string st;
    cin>>t;
    while(t--)
    {
        p=0;
        for(i=0;i<26;i++)
            ara[i]=0;
        cin>>n;
        cin>>st;
        for(i=0;i<n;i++)
        {
            if(i==0)
                ara[st[i]-'A']=1;
            else if(st[i]!=st[i-1])
            {
                if(ara[st[i]-'A']==0)
                    ara[st[i]-'A']=1;
                else
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
