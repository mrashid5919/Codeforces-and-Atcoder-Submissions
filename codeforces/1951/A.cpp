#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,p,on;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        p=0;
        on=0;
        vector<int> pos;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                on++;
                pos.push_back(i);
            }
        }
        if(on%2==1)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<on/2;i++)
        {
            if(pos[i+on/2]-pos[i]<=1)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}