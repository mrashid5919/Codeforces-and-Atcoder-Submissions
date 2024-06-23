#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ind[100005];

int main()
{
    fastio;
    long long t,n,m,i,j,cur;
    string s,s2;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>s;
        for(i=0;i<m;i++)
        {
            cin>>ind[i];
        }
        cin>>s2;
        sort(ind,ind+m);
        sort(s2.begin(),s2.end());
        cur=0;
        for(i=0;i<m;i++)
        {
            if(i==0)
            {
                s[ind[i]-1]=s2[cur];
                cur++;
            }
            else if(ind[i]!=ind[i-1])
            {
                s[ind[i]-1]=s2[cur];
                cur++;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}