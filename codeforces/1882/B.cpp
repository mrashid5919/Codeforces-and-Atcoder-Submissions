#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,j,k[60],mx,ara[60][60],cnt;
    cin>>t;
    while(t--)
    {
        mx=-1;
        cnt=0;
        vector<int> pos[60];
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>k[i];
            for(j=0;j<k[i];j++)
            {
                cin>>ara[i][j];
                pos[ara[i][j]].push_back(i);
            }
        }
        for(i=1;i<=50;i++)
        {
            if(pos[i].size()>0)
                cnt++;
        }
        //cout<<cnt<<"\n";
        for(i=1;i<=50;i++)
        {
            //cout<<pos[i].size()<<"\n";
            set<int> st;
            int p=-1;
            for(j=0;j<n;j++)
            {
                if(p+1<pos[i].size() && j==pos[i][p+1])
                {
                    p++;
                    continue;
                }
                for(int l=0;l<k[j];l++)
                    st.insert(ara[j][l]);
            }
            if(mx==-1)
            {
                if(st.size()<cnt)
                    mx=st.size();
            }
            else
            {
                if(st.size()<cnt){
                    int s=st.size();
                    mx=max(mx,s);
                }
            }
            //cout<<mx<<"\n";
        }
        if(mx==-1)
            cout<<0<<"\n";
        else
            cout<<mx<<"\n";
    }
    return 0;
}