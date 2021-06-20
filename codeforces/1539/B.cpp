#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,q,l,r;
    string s;
    cin>>n>>q;
    cin>>s;
    ara[0]=0;
    for(i=1;i<=n;i++)
    {
        if(i==1)
            ara[i]=s[i-1]-'a'+1;
        else
            ara[i]=ara[i-1]+(s[i-1]-'a'+1);
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<ara[r]-ara[l-1]<<"\n";
    }
    return 0;
}
