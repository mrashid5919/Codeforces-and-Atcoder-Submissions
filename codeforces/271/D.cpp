//Took help
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int idx,nodes[2250005][26],n;
bool marked[2250005];
string s;

void add(int i)
{
    int v=0;
    while(i<n)
    {
        if(nodes[v][s[i]-'a']==-1)
        {
            nodes[v][s[i]-'a']=idx;
            idx++;
        }
        v=nodes[v][s[i]-'a'];
        i++;
    }
}

int main()
{
    fastio;
    string ch;
    int k,i,j;
    cin>>s;
    cin>>ch;
    cin>>k;
    idx=1;
    n=s.size();
    memset(nodes,-1,sizeof(nodes));
    for(i=0;i<n;i++)
        add(i);
    int ans=0;
    for(i=0;i<n;i++)
    {
        int bad=0,cur=0;
        for(j=i;j<n;j++)
        {
            if(ch[s[j]-'a']=='0')
                bad++;
            cur=nodes[cur][s[j]-'a'];
            if(bad>k)
                break;
            if(!marked[cur])
            {
                ans++;
                marked[cur]=1;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}