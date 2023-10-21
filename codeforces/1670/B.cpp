#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,ch[40],mx;
    string s,x;
    cin>>t;
    while(t--)
    {
        mx=0;
        for(i=0;i<26;i++)
            ch[i]=0;
        cin>>n;
        cin>>s;
        cin>>k;
        while(k--)
        {
            cin>>x;
            ch[x[0]-'a']=1;
        }
        vector<long long> sp;
        for(i=0;i<n;i++)
        {
            if(ch[s[i]-'a']!=0)
                sp.push_back(i);
        }
        for(i=0;i<sp.size();i++)
        {
            if(i==0)
                mx=sp[i];
            else
                mx=max(mx,sp[i]-sp[i-1]);
        }
        cout<<mx<<"\n";
    }
    return 0;
}
