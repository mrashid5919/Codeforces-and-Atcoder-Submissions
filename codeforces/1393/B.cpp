#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,q,i,x;
    char ch;
    map<int,int> mp;
    set<pair<int,int>,greater<pair<int,int> > > st;
    set<pair<int,int>,greater<pair<int,int> > >::iterator it;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
        //cout<<mp[x]<<"\n";
        if(mp[x]!=1)
            st.erase(make_pair(mp[x]-1,x));
        st.insert(make_pair(mp[x],x));
        //cout<<st.size()<<"\n";
        //cout<<(st.begin())->first<<" "<<(st.begin())->second<<"\n";
    }
    cin>>q;
    while(q--)
    {
        cin>>ch>>x;
        if(ch=='+')
        {
            mp[x]++;
            if(mp[x]!=1)
                st.erase(make_pair(mp[x]-1,x));
            st.insert(make_pair(mp[x],x));
        }
        else
        {
            st.erase({mp[x],x});
            if(mp[x]>=2)
                st.insert(make_pair(mp[x]-1,x));
            mp[x]--;
        }
        int p=st.size();
        if(p==0)
        {
            cout<<"NO\n";
            continue;
        }
        it=st.begin();
        if(it->first >=8)
        {
            cout<<"YES"<<"\n";
        }
        else if(it->first <4)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        else
        {
            if(p==1)
            {
                cout<<"NO"<<"\n";
                continue;
            }
            int a=it->first;
            it=st.begin();
            advance(it,1);
            if((it->first >=2 && a>=6) || (it->first >=4))
                cout<<"YES\n";
            else if(it->first <2)
            {
                cout<<"NO"<<"\n";
            }
            else
            {
                if(p==2)
                {
                    cout<<"NO"<<"\n";
                    continue;
                }
                it=st.begin();
                advance(it,2);
                if(it->first >=2)
                    cout<<"YES"<<"\n";
                else
                    cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}
